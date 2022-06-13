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

//����������� ������� �����, � ���� ���������� ������ ���������

login_ids = new TStringList(); //������� ������ ���� ��� �������� ������ ���� �������������

srand(time(NULL)); //������������� ��������� ��������� �����

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
String IDGen(String prefix){  //������� ��������� ������ � ������� ��������� ��������
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
//������� ������ ��������� � ������
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
//��������� �������� �� ����������
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
//������������ �������� � ���������
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
//������������ �������� �� ���� ���� ���� � ���� ����
void SET_FIELD_VALUE(TField *Field, TbsSkinDateEdit* DateEdit){

if (!Field->IsNull) {
DateEdit->Date=Field->AsDateTime;
}

}
//---------------------------------------------------------------------------
//������������ �������� ���� ���� - ���������
void SET_PARAM_VALUE(TUniParam *Param, TbsSkinDateEdit* DateEdit){

if (DateEdit->IsDateInput()) {
Param->AsDate=DateEdit->Date;
}

}
//---------------------------------------------------------------------------
//������� ������� ������ � ������ �� TDBGridEh (�������)
void GRID_EXPORT_XLS(TDBGridEh *_grid){

//������������ ������ � ������� ������������ ������� SaveDBGridEhToExportFile � ���� export_temp.xls
SaveDBGridEhToExportFile(__classid(TDBGridEhExportAsXLS), _grid, ExtractFilePath(Application->ExeName)+"export_temp.xls", true);

Sleep(500);  //���� 500 ��������

//��������� �������������� ����
ShellExecute(NULL, L"open", String(ExtractFilePath(Application->ExeName)+"export_temp.xls").c_str(), L"", L"C:", SW_SHOW);


}
//---------------------------------------------------------------------------
//������� ������
void TMainForm::LOGIN_EXECUTE(){

if (bsSkinComboBox1->ItemIndex==-1) {   //�������� �� ����� �������������, ���� �� ������ �� ������� ���������
MessageDlg("�������� ������������ �� ������ � ������� ������.",mtWarning,TMsgDlgButtons() << mbOK, 0);
return;
}

//�������� ��������� ��� �������, ���� ���������� ������������ � �������� ������
UnicodeString LOGIN_ID=login_ids->Strings[bsSkinComboBox1->ItemIndex];
UnicodeString PASS=bsSkinPasswordEdit1->Text;

//������ ����������� ������ � ������� users � ����������� ���� � ������
UniQueryEx->Close();
UniQueryEx->SQL->Clear();
UniQueryEx->SQL->Text="SELECT _ID, _NAME, _LAST_NAME, _MIDDLE_NAME, _IS_ADMIN FROM users WHERE _ID=:ID AND _PASS=:PASS";
UniQueryEx->ParamByName("ID")->AsString=LOGIN_ID;
UniQueryEx->ParamByName("PASS")->AsString=PASS;
UniQueryEx->Open();

//���� ��� ������������ ������� �� ������ �������� ���� �����/������
if (UniQueryEx->RecordCount==0) {
MessageDlg("�� ������� �������� ��� ������������ ��� ������.",mtWarning,TMsgDlgButtons() << mbOK, 0);
return;
}

//��������� ��������� ��������� ������������
//����� ��
IS_ADMIN=UniQueryEx->FieldByName("_IS_ADMIN")->AsBoolean;

//��� ��������� ������������
ACTIVE_USER_NAME=UniQueryEx->FieldByName("_LAST_NAME")->AsString+" "+UniQueryEx->FieldByName("_NAME")->AsString+" "+UniQueryEx->FieldByName("_MIDDLE_NAME")->AsString;

//���� ��������� ������������
ACTIVE_USER_ID=LOGIN_ID;

//������ �������� ������ � ������� ����
MainButtonsPanel->Enabled=true;
//�������� ������ �����������
LOGIN_PANEL->Visible=false;

//����������� ������� ���� ������ ������
this->Top=0;
this->Left=0;
this->Width=Screen->Width;
this->Height=150;


}
//---------------------------------------------------------------------------
//������� �������� ������ ��� �����������
void TMainForm::LOGIN_LOAD(){

//�������� ������ ���� ������������� � ��
UniQueryEx->Close();
UniQueryEx->SQL->Clear();
UniQueryEx->SQL->Text="SELECT _ID, _NAME, _LAST_NAME, _MIDDLE_NAME FROM users ORDER BY _LAST_NAME";
UniQueryEx->Open();

//������� ��������� � ������� ������ ����� �������������
bsSkinComboBox1->Items->Clear();

//��������� � ����� ������
while (!UniQueryEx->Eof){
//���� ������������
login_ids->Add(UniQueryEx->FieldByName("_ID")->AsString);
//��� ������������
bsSkinComboBox1->Items->Add(UniQueryEx->FieldByName("_LAST_NAME")->AsString+" "+UniQueryEx->FieldByName("_NAME")->AsString+" "+UniQueryEx->FieldByName("_MIDDLE_NAME")->AsString);
UniQueryEx->Next(); //��������� �� ��������� ������
}

}
//---------------------------------------------------------------------------
void __fastcall TMainForm::bsSkinSpeedButton2Click(TObject *Sender)
{
if (!IS_ADMIN) {
MessageDlg("� ����� ������� ������ ��� ������� � �������������", mtConfirmation,TMsgDlgButtons() << mbOK, 0);
return;
}

//��������� ���� �������������
BaseUsersForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::bsSkinSpeedButton3Click(TObject *Sender)
{
//��������� ���� ��������
BaseClientsForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormResize(TObject *Sender)
{
//��� ��������� �������� ����� ������ ������ ����������� �� ������
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
switch (MessageDlg("�� ������� ��� ������ ������� ���������?",mtConfirmation,TMsgDlgButtons() << mbOK << mbCancel, 0)) {
case mrCancel: {CanClose=false;}
}
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::bsSkinSpeedButton5Click(TObject *Sender)
{
LOGIN_EXECUTE(); //����� �����������
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FormCreate(TObject *Sender)
{
LOGIN_LOAD();  //� ������ �������� ����� ��������� ������ ��� �����������
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::Action1Execute(TObject *Sender)
{
//�������� �� ������ Enter, ������� �� ������ ������
if (LOGIN_PANEL->Visible) {
bsSkinSpeedButton5Click(NULL);
}
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::bsSkinSpeedButton7Click(TObject *Sender)
{
//����� ���� ��������
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
//��������� ���� ������� � �����
BaseProdsServsForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::bsSkinSpeedButton6Click(TObject *Sender)
{
//��������� ���� ������
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

