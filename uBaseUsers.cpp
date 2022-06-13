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
//��������� �������
UniTable_Users->Close();
UniTable_Users->Open();
}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::bsSkinSpeedButton4Click(TObject *Sender)
{
if (UniTable_Users->RecordCount==0) {
return; //���� ��� ������� � ������� �� ������
}

switch (MessageDlg("�� ������� ��� ������ ������� ����������?", mtConfirmation,TMsgDlgButtons() << mbOK << mbCancel, 0)) {
case mrCancel: {return;};
}

//������ �������� ������ �� ������� �������������
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
return;  //���� ��� ������� � ������� �� ������
}

//��������� ����� �������������� ������������, � �������� ������� ��������� �������� ���� ���������� ������������
TAddEditUserForm *pAddEditUserForm = new TAddEditUserForm(this, UniTable_Users->FieldByName("_ID")->AsString);

try {
pAddEditUserForm->ShowModal();
} __finally {

delete pAddEditUserForm;
pAddEditUserForm=NULL;
//������������� ������� ����� �������� ����
UniTable_Users->Close();
UniTable_Users->Open();
}
}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::bsSkinSpeedButton2Click(TObject *Sender)
{
//��������� ����� ����������� ������������, ������ �������� ��� ������ ������, ��� ������ ��� �� ��������� ������������ � �� �����������
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
//����� ��������� ����� ��������� ������ � ��������
DBGridEh_users->SaveColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "TBaseUsersForm"+MainForm->ACTIVE_USER_ID, true);

}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::FormCreate(TObject *Sender)
{
//�������� ������ � ��������
DBGridEh_users->RestoreColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "TBaseUsersForm"+MainForm->ACTIVE_USER_ID, TColumnEhRestoreParams() << crpColIndexEh << crpColWidthsEh << crpSortMarkerEh << crpColVisibleEh << crpDropDownRowsEh << crpDropDownWidthEh);

}
//---------------------------------------------------------------------------

void __fastcall TBaseUsersForm::DBGridEh_usersTitleBtnClick(TObject *Sender, int ACol,
		  TColumnEh *Column)
{

//������������ ������� �� ��������� ������� (���������� ������)

static String OLD_title="";
static bool SortMode=true;

UnicodeString FLD=Column->FieldName;


if (OLD_title!=FLD) {
SortMode=true;
}

//������������� ������ �� � �������������� ������� � ������� ��������� ����������� �������
UniTable_Users->Close();
UniTable_Users->SQL->Text="SELECT _ID, _TAB_NUM, _LAST_NAME, _NAME, _MIDDLE_NAME, _BIRTHDAY, _POST FROM users ";

if (SortMode) {
UniTable_Users->SQL->Add(" ORDER BY `"+FLD+"`");     //�������������� ����� ������� � ����������� ��������
} else {
UniTable_Users->SQL->Add(" ORDER BY `"+FLD+"` DESC"); //�������������� ����� ������� � ����������� �������� �� �������� ����������
}

OLD_title=FLD;
SortMode=!SortMode;

UniTable_Users->Open();

}
//---------------------------------------------------------------------------
void __fastcall TBaseUsersForm::bsSkinSpeedButton5Click(TObject *Sender)
{
//����� ������� �������� ������ � ������
GRID_EXPORT_XLS(DBGridEh_users);
}
//---------------------------------------------------------------------------

void __fastcall TBaseUsersForm::bsSkinSpeedButton1Click(TObject *Sender)
{
//������������ ������� (���������� ������)
UniTable_Users->Close();
UniTable_Users->Open();
}
//---------------------------------------------------------------------------


