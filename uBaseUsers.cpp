//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uBaseUsers.h"
#include "uMain.h"
#include "uAddEditUser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "bsSkinCtrls"
#pragma link "BusinessSkinForm"
#pragma link "DBAccess"
#pragma link "DBAxisGridsEh"
#pragma link "DBGridEh"
#pragma link "DBGridEhGrouping"
#pragma link "DBGridEhToolCtrls"
#pragma link "DynVarsEh"
#pragma link "EhLibVCL"
#pragma link "GridsEh"
#pragma link "MemDS"
#pragma link "ToolCtrlsEh"
#pragma link "Uni"
#pragma link "FormSize"
#pragma resource "*.dfm"
TBaseUsersForm *BaseUsersForm;
//---------------------------------------------------------------------------
__fastcall TBaseUsersForm::TBaseUsersForm(TComponent* Owner)
	: TForm(Owner)
{
//открываем таблицу
UniTable_Users->Close();
UniTable_Users->Open();
}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::bsSkinSpeedButton4Click(TObject *Sender)
{
if (UniTable_Users->RecordCount==0) {
return; //если нет записей в таблице то ретурн
}

switch (MessageDlg("Вы уверены что хотите удалить сотрудника?", mtConfirmation,TMsgDlgButtons() << mbOK << mbCancel, 0)) {
case mrCancel: {return;};
}

//запрос удаления записи из таблицы пользователей
UniQueryDEL->Close();
UniQueryDEL->SQL->Text="DELETE FROM users WHERE _ID=:ID";
UniQueryDEL->ParamByName("ID")->AsString=UniTable_Users->FieldByName("_ID")->AsString;
UniQueryDEL->ExecSQL();

UniTable_Users->Close();
UniTable_Users->Open();
}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::bsSkinSpeedButton3Click(TObject *Sender)
{
if (UniTable_Users->RecordCount==0) {
return;  //если нет записей в таблице то ретурн
}

//открываем форму редактирования пользователя, в качестве второго параметра передаем айди выбранного пользователя
TAddEditUserForm *pAddEditUserForm = new TAddEditUserForm(this, UniTable_Users->FieldByName("_ID")->AsString);

try {
pAddEditUserForm->ShowModal();
} __finally {

delete pAddEditUserForm;
pAddEditUserForm=NULL;
//переоткрываем таблицу после закрытия окна
UniTable_Users->Close();
UniTable_Users->Open();
}
}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::bsSkinSpeedButton2Click(TObject *Sender)
{
//открываем форму добавленияп пользователя, второй параметр тут пустая строка, это значит что мы добавляем пользователя а не редактируем
TAddEditUserForm *pAddEditUserForm = new TAddEditUserForm(this, "");

try {
pAddEditUserForm->ShowModal();
} __finally {

delete pAddEditUserForm;
pAddEditUserForm=NULL;
UniTable_Users->Close();
UniTable_Users->Open();
}
}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::FormClose(TObject *Sender, TCloseAction &Action)
{
//перед закрытием формы сохраняем данные о столбцах
DBGridEh_users->SaveColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "TBaseUsersForm"+MainForm->ACTIVE_USER_ID, true);

}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::FormCreate(TObject *Sender)
{
//загрузка данных о столбцах
DBGridEh_users->RestoreColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "TBaseUsersForm"+MainForm->ACTIVE_USER_ID, TColumnEhRestoreParams() << crpColIndexEh << crpColWidthsEh << crpSortMarkerEh << crpColVisibleEh << crpDropDownRowsEh << crpDropDownWidthEh);

}
//---------------------------------------------------------------------------

void __fastcall TBaseUsersForm::DBGridEh_usersTitleBtnClick(TObject *Sender, int ACol,
		  TColumnEh *Column)
{

//обрабатываем нажатие на заголовок таблицы (сортировка данных)

static String OLD_title="";
static bool SortMode=true;

UnicodeString FLD=Column->FieldName;


if (OLD_title!=FLD) {
SortMode=true;
}

//переоткрываем запрос но с дополнительным текстом в котором указываем сортируемый столбец
UniTable_Users->Close();
UniTable_Users->SQL->Text="SELECT _ID, _TAB_NUM, _LAST_NAME, _NAME, _MIDDLE_NAME, _BIRTHDAY, _POST FROM users ";

if (SortMode) {
UniTable_Users->SQL->Add(" ORDER BY `"+FLD+"`");     //дополнительный текст запроса с сортируемым столбцом
} else {
UniTable_Users->SQL->Add(" ORDER BY `"+FLD+"` DESC"); //дополнительный текст запроса с сортируемым столбцом но обратная сортировка
}

OLD_title=FLD;
SortMode=!SortMode;

UniTable_Users->Open();

}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::bsSkinSpeedButton5Click(TObject *Sender)
{
//вызов функции экспорта данных в эксель
GRID_EXPORT_XLS(DBGridEh_users);
}
//---------------------------------------------------------------------------

void __fastcall TBaseUsersForm::bsSkinSpeedButton1Click(TObject *Sender)
{
//переоткрытие таблицы (обновление данных)
UniTable_Users->Close();
UniTable_Users->Open();
}
//---------------------------------------------------------------------------


