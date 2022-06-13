//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uMain.h"
#include "uSettings.h"
#include <DBGridEhImpExp.hpp>
#include "uReports.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DBAccess"
#pragma link "MySQLUniProvider"
#pragma link "Uni"
#pragma link "UniProvider"
#pragma link "bsSkinCtrls"
#pragma link "DBAxisGridsEh"
#pragma link "DBGridEh"
#pragma link "DBGridEhGrouping"
#pragma link "DBGridEhToolCtrls"
#pragma link "DynVarsEh"
#pragma link "EhLibVCL"
#pragma link "GridsEh"
#pragma link "MemDS"
#pragma link "ToolCtrlsEh"
#pragma link "bsSkinData"
#pragma link "BusinessSkinForm"
#pragma link "bsSkinBoxCtrls"
#pragma link "bsSkinTabs"
#pragma link "bsSkinTabs"
#pragma link "bsSkinMenus"
#pragma link "bsPngImageList"
#pragma link "bsSkinExCtrls"
#pragma link "acPNG"
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{

String main_folder=ExtractFilePath(Application->ExeName)+"images\\";

if (!Bsfilectrl::DirectoryExists(main_folder)) {
CreateDirectory(main_folder.c_str(), NULL);
}

//конструктор главной формы, с него начинается работа программы

login_ids = new TStringList(); //создаем стринг лист для хранения списка айди пользователей

srand(time(NULL)); //перезапускаем генератор случайных чисел

Ini = new TIniFile(ExtractFilePath(Application->ExeName)+"settings.ini");

while (true) {

try {
UniConnectionMain->Username=Ini->ReadString("OPTIONS", "USER", "root");
UniConnectionMain->Password=Ini->ReadString("OPTIONS", "PASS", "root");
UniConnectionMain->Server=Ini->ReadString("OPTIONS", "IP", "127.0.0.1");
UniConnectionMain->Database=Ini->ReadString("OPTIONS", "DB", "sport_club_db");
UniConnectionMain->Connect();

} catch (...) {

TSettingsForm *pSettingsForm = new TSettingsForm(this);

try {
if (pSettingsForm->ShowModal()==mrCancel) {
_exit(0);
}

} __finally {
delete pSettingsForm;
pSettingsForm=NULL;
}
continue;
}

break;
}


}
//---------------------------------------------------------------------------
String IDGen(String prefix){  //функция генерации строки с набором случайных символов
String ID=prefix;
unsigned int buf;
String S="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
for (int i = 1; i < 13; i++) {
buf=rand()%S.Length();
if (buf==0) {
buf=1;}
ID+=S[buf];
}
return ID;
}
//---------------------------------------------------------------------------
//функция замены подстроки в строке
UnicodeString ChangeAllSubStr(UnicodeString Str,UnicodeString Sub,UnicodeString Z)
{
 int Num,LnSub=Sub.Length(),LnS;String S=Str,Ret;
 for(;;)
  {
   if((Num=S.Pos(Sub))<=0){Ret=Ret+S;break;}
   Ret=Ret+S.SubString(1,Num-1);Ret=Ret+Z;
   LnS=S.Length()-(Num+LnSub)+1;
   S=S.SubString(Num+LnSub,LnS);
  }
 return(Ret);
}
//---------------------------------------------------------------------------
//получение значения из комбобокса
String GET_VALUE(TbsSkinComboBox *ComboBox){

if (ComboBox->Style==bscbFixedStyle) {

if (ComboBox->ItemIndex!=-1) {
return ComboBox->Items->Strings[ComboBox->ItemIndex];
} else {
return "";
}

} else {
return ComboBox->Text;
}

}
//---------------------------------------------------------------------------
//присваивание значения в комбобокс
void SET_VALUE(TbsSkinComboBox *ComboBox, String Value){

if (ComboBox->Style==bscbFixedStyle) {

int idx=ComboBox->Items->IndexOf(Value);

if (idx!=-1) {
ComboBox->ItemIndex=idx;
} else {
ComboBox->ItemIndex-1;
}

} else {
ComboBox->Text=Value;
}

}
//---------------------------------------------------------------------------
//присваивание значения из поля типа дата в дэйт эдит
void SET_FIELD_VALUE(TField *Field, TbsSkinDateEdit* DateEdit){

if (!Field->IsNull) {
DateEdit->Date=Field->AsDateTime;
}

}
//---------------------------------------------------------------------------
//присваивание значения типа дата - параметру
void SET_PARAM_VALUE(TUniParam *Param, TbsSkinDateEdit* DateEdit){

if (DateEdit->IsDateInput()) {
Param->AsDate=DateEdit->Date;
}

}
//---------------------------------------------------------------------------
//функция экпорта данных в эксель из TDBGridEh (таблицы)
void GRID_EXPORT_XLS(TDBGridEh *_grid){

//экспортируем данные с помощью библиотечной функции SaveDBGridEhToExportFile в файл export_temp.xls
SaveDBGridEhToExportFile(__classid(TDBGridEhExportAsXLS), _grid, ExtractFilePath(Application->ExeName)+"export_temp.xls", true);

Sleep(500);  //ждем 500 миллисек

//открываем экспортируемый файл
ShellExecute(NULL, L"open", String(ExtractFilePath(Application->ExeName)+"export_temp.xls").c_str(), L"", L"C:", SW_SHOW);


}
//---------------------------------------------------------------------------
//фукцния логина
void TMainForm::LOGIN_EXECUTE(){

if (bsSkinComboBox1->ItemIndex==-1) {   //поверяем на выбор пользотвателя, если не выбран то выводим сообщение
MessageDlg("Выберите пользователя из списка и введите пароль.",mtWarning,TMsgDlgButtons() << mbOK, 0);
return;
}

//получаем параметры для запроса, айди выбранного пользователя и ввденный пароль
UnicodeString LOGIN_ID=login_ids->Strings[bsSkinComboBox1->ItemIndex];
UnicodeString PASS=bsSkinPasswordEdit1->Text;

//делаем селективный запрос в таблицу users с параметрами айди и пароль
UniQueryEx->Close();
UniQueryEx->SQL->Clear();
UniQueryEx->SQL->Text="SELECT _ID, _NAME, _LAST_NAME, _MIDDLE_NAME, _IS_ADMIN FROM users WHERE _ID=:ID AND _PASS=:PASS";
UniQueryEx->ParamByName("ID")->AsString=LOGIN_ID;
UniQueryEx->ParamByName("PASS")->AsString=PASS;
UniQueryEx->Open();

//если нет возвращенных записей то значит неверная пара логин/пароль
if (UniQueryEx->RecordCount==0) {
MessageDlg("Вы указали неверное имя пользователя или пароль.",mtWarning,TMsgDlgButtons() << mbOK, 0);
return;
}

//сохраняем параметры активного пользователя
//админ ли
IS_ADMIN=UniQueryEx->FieldByName("_IS_ADMIN")->AsBoolean;

//имя активного пользователя
ACTIVE_USER_NAME=UniQueryEx->FieldByName("_LAST_NAME")->AsString+" "+UniQueryEx->FieldByName("_NAME")->AsString+" "+UniQueryEx->FieldByName("_MIDDLE_NAME")->AsString;

//айди активного пользователя
ACTIVE_USER_ID=LOGIN_ID;

//делаем активным кнопки в главном окне
MainButtonsPanel->Enabled=true;
//скрываем панель авторизации
LOGIN_PANEL->Visible=false;

//распологаем главное окно вверху экрана
this->Top=0;
this->Left=0;
this->Width=Screen->Width;
this->Height=150;


}
//---------------------------------------------------------------------------
//функция загрузки данных для авторизации
void TMainForm::LOGIN_LOAD(){

//получаем список всех пользователей в бд
UniQueryEx->Close();
UniQueryEx->SQL->Clear();
UniQueryEx->SQL->Text="SELECT _ID, _NAME, _LAST_NAME, _MIDDLE_NAME FROM users ORDER BY _LAST_NAME";
UniQueryEx->Open();

//очищаем комбобокс в котором храним имена пользователей
bsSkinComboBox1->Items->Clear();

//заполняем в цикле данные
while (!UniQueryEx->Eof){
//айди пользователя
login_ids->Add(UniQueryEx->FieldByName("_ID")->AsString);
//ФИО пользователя
bsSkinComboBox1->Items->Add(UniQueryEx->FieldByName("_LAST_NAME")->AsString+" "+UniQueryEx->FieldByName("_NAME")->AsString+" "+UniQueryEx->FieldByName("_MIDDLE_NAME")->AsString);
UniQueryEx->Next(); //переходим на следующую запись
}

}
//---------------------------------------------------------------------------
void __fastcall TMainForm::bsSkinSpeedButton2Click(TObject *Sender)
{
if (!IS_ADMIN) {
MessageDlg("У вашей учетной записи нет доступа к пользователям", mtConfirmation,TMsgDlgButtons() << mbOK, 0);
return;
}

//открываем окно пользователей
BaseUsersForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::bsSkinSpeedButton3Click(TObject *Sender)
{
//открываем окно клиентов
BaseClientsForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormResize(TObject *Sender)
{
//при изменении размеров формы ставим панель авторизации по центру
LOGIN_PANEL->Left=this->Width/2-LOGIN_PANEL->Width/2;
LOGIN_PANEL->Top=this->Height/2-LOGIN_PANEL->Height/2;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::bsSkinSpeedButton4Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormCloseQuery(TObject *Sender, bool &CanClose)
{
switch (MessageDlg("Вы уверены что хотите закрыть программу?",mtConfirmation,TMsgDlgButtons() << mbOK << mbCancel, 0)) {
case mrCancel: {CanClose=false;}
}
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::bsSkinSpeedButton5Click(TObject *Sender)
{
LOGIN_EXECUTE(); //вызов авторизации
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormCreate(TObject *Sender)
{
LOGIN_LOAD();  //в момент создания формы загружаем данные для авторизации
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Action1Execute(TObject *Sender)
{
//действие на нажаие Enter, нажатие на кнопку логина
if (LOGIN_PANEL->Visible) {
bsSkinSpeedButton5Click(NULL);
}
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::bsSkinSpeedButton7Click(TObject *Sender)
{
//вызов окна настроек
TSettingsForm *pSettingsForm = new TSettingsForm(this);

try {
pSettingsForm->ShowModal();
} __finally {
delete pSettingsForm;
pSettingsForm=NULL;

}
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::bsSkinSpeedButton1Click(TObject *Sender)
{
//открываем окно товаров и услуг
BaseProdsServsForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::bsSkinSpeedButton6Click(TObject *Sender)
{
//открываем окно продаж
BaseOrdersForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::bsSkinSpeedButton8Click(TObject *Sender)
{
TReportsForm *pReportsForm = new TReportsForm(this);

try {
pReportsForm->ShowModal();
} __finally {
delete pReportsForm;
pReportsForm=NULL;
}

}
//---------------------------------------------------------------------------

