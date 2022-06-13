//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uAddEditUser.h"
#include "uMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "bsSkinBoxCtrls"
#pragma link "bsSkinCtrls"
#pragma link "bsSkinTabs"
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
#pragma link "dbimageen"
#pragma link "ieview"
#pragma link "imageenview"
#pragma link "ieopensavedlg"
#pragma link "imageenio"
#pragma link "hyiedefs"
#pragma link "hyieutils"
#pragma link "iesettings"
#pragma link "iexBitmaps"
#pragma link "iexLayers"
#pragma link "iexRulers"
#pragma link "iexToolbars"
#pragma link "iexUserInteractions"
#pragma link "FormSize"
#pragma resource "*.dfm"
TAddEditUserForm *AddEditUserForm;
//---------------------------------------------------------------------------
__fastcall TAddEditUserForm::TAddEditUserForm(TComponent* Owner, String pID)
	: TForm(Owner)
{


PHOTO_FILENAME="";

if (pID=="") {
TYPE="ADD";
MAIN_ID=IDGen("USER_");
Caption="������������ (��������)";
} else {
TYPE="EDIT";
MAIN_ID=pID;
Caption="������������ (�������������)";
}


}
//---------------------------------------------------------------------------
//������� ����������� ������ ��� ��������������
void TAddEditUserForm::ShowData(){

ImageEnDBView1->Visible=true;
ImageEnView1->Visible=false;

//����������� ������ �� ����
UniQueryShow->Close();
UniQueryShow->SQL->Text="SELECT * FROM users WHERE _ID=:ID";
UniQueryShow->ParamByName("ID")->AsString=MAIN_ID;
UniQueryShow->Open();

//������������ ��������
bsSkinEdit2->Text=UniQueryShow->FieldByName("_NAME")->AsString;
bsSkinEdit1->Text=UniQueryShow->FieldByName("_LAST_NAME")->AsString;
bsSkinEdit3->Text=UniQueryShow->FieldByName("_MIDDLE_NAME")->AsString;

bsSkinMemo1->Lines->Text=UniQueryShow->FieldByName("_ADDRESS")->AsString;

if (UniQueryShow->FieldByName("_GENDER")->AsString=="�������") {
RadioButton1->Checked=true;
RadioButton2->Checked=false;
} else {
RadioButton1->Checked=false;
RadioButton2->Checked=true;
}


SET_FIELD_VALUE(UniQueryShow->FieldByName("_BIRTHDAY"), bsSkinDateEdit7);

bsSkinEdit13->Text=UniQueryShow->FieldByName("_PHONE")->AsString;

bsSkinCheckBox2->Checked=UniQueryShow->FieldByName("_IS_ADMIN")->AsBoolean;

bsSkinEdit17->Text=UniQueryShow->FieldByName("_PASS")->AsString;
bsSkinEdit18->Text=UniQueryShow->FieldByName("_TAB_NUM")->AsString;



}
//---------------------------------------------------------------------------
//������� ���������� ������ � �� � ������� �������������
void TAddEditUserForm::AddData(){

UniQueryEx->Close();
UniQueryEx->SQL->Text="INSERT INTO users (_ADDRESS, _ID ,_NAME ,_LAST_NAME ,_MIDDLE_NAME ,_GENDER ,_BIRTHDAY ,_PHONE ,_PHOTO ,_IS_ADMIN ,_PASS ,_TAB_NUM) VALUES (:ADDRESS, :ID ,:NAME ,:LAST_NAME ,:MIDDLE_NAME ,:GENDER ,:BIRTHDAY ,:PHONE ,:PHOTO ,:IS_ADMIN ,:PASS ,:TAB_NUM);";


UniQueryEx->ParamByName("ID")->AsString=MAIN_ID;

UniQueryEx->ParamByName("NAME")->AsString=bsSkinEdit2->Text;
UniQueryEx->ParamByName("LAST_NAME")->AsString=bsSkinEdit1->Text;
UniQueryEx->ParamByName("MIDDLE_NAME")->AsString=bsSkinEdit3->Text;

if (RadioButton1->Checked) {
UniQueryEx->ParamByName("GENDER")->AsString="�������";
} else {
UniQueryEx->ParamByName("GENDER")->AsString="�������";
}



SET_PARAM_VALUE(UniQueryEx->ParamByName("BIRTHDAY"), bsSkinDateEdit7);


UniQueryEx->ParamByName("PHONE")->AsString=bsSkinEdit13->Text;


UniQueryEx->ParamByName("IS_ADMIN")->AsBoolean=bsSkinCheckBox2->Checked;

UniQueryEx->ParamByName("PASS")->AsString=bsSkinEdit17->Text;
UniQueryEx->ParamByName("TAB_NUM")->AsString=bsSkinEdit18->Text;

//���� ����, ���� � �������� �������� � ������ PHOTO_FILENAME ����������, �� ��������� ��� � ������
if (FileExists(PHOTO_FILENAME)) {
UniQueryEx->ParamByName("PHOTO")->LoadFromFile(PHOTO_FILENAME, ftBlob);
}


UniQueryEx->ExecSQL();


Close();

}
//---------------------------------------------------------------------------
//������� �������������� ������ � ������� �����������
void TAddEditUserForm::EditData(){


UniQueryEx->Close();

//���� � ������ ���������� ���� � ����� � ���� ���������� ������ ���� �������� ����
if (FileExists(PHOTO_FILENAME)) {
//��������� ������ � ���������� ������ � ���� _PHOTO
UniQueryEx->SQL->Text="UPDATE users SET _ADDRESS=:ADDRESS, _NAME = :NAME, _PHOTO = :PHOTO ,_LAST_NAME = :LAST_NAME ,_MIDDLE_NAME = :MIDDLE_NAME ,_GENDER = :GENDER ,_BIRTHDAY = :BIRTHDAY ,_PHONE = :PHONE ,_POST = :POST ,_IS_ADMIN = :IS_ADMIN ,_PASS = :PASS ,_TAB_NUM = :TAB_NUM WHERE  _ID = :ID;";
} else {
//��������� ������ ��� ��������� ���� _PHOTO
UniQueryEx->SQL->Text="UPDATE users SET _ADDRESS=:ADDRESS, _NAME = :NAME ,_LAST_NAME = :LAST_NAME ,_MIDDLE_NAME = :MIDDLE_NAME ,_GENDER = :GENDER ,_BIRTHDAY = :BIRTHDAY ,_PHONE = :PHONE ,_POST = :POST ,_IS_ADMIN = :IS_ADMIN ,_PASS = :PASS ,_TAB_NUM = :TAB_NUM WHERE  _ID = :ID;";
}

UniQueryEx->ParamByName("ID")->AsString=MAIN_ID;

UniQueryEx->ParamByName("NAME")->AsString=bsSkinEdit2->Text;
UniQueryEx->ParamByName("LAST_NAME")->AsString=bsSkinEdit1->Text;
UniQueryEx->ParamByName("MIDDLE_NAME")->AsString=bsSkinEdit3->Text;

if (RadioButton1->Checked) {
UniQueryEx->ParamByName("GENDER")->AsString="�������";
} else {
UniQueryEx->ParamByName("GENDER")->AsString="�������";
}


SET_PARAM_VALUE(UniQueryEx->ParamByName("BIRTHDAY"), bsSkinDateEdit7);


UniQueryEx->ParamByName("PHONE")->AsString=bsSkinEdit13->Text;

UniQueryEx->ParamByName("ADDRESS")->AsString=bsSkinMemo1->Lines->Text;

UniQueryEx->ParamByName("IS_ADMIN")->AsBoolean=bsSkinCheckBox2->Checked;

UniQueryEx->ParamByName("PASS")->AsString=bsSkinEdit17->Text;
UniQueryEx->ParamByName("TAB_NUM")->AsString=bsSkinEdit18->Text;

//���� ����, ���� � �������� �������� � ������ PHOTO_FILENAME ����������, �� ��������� ��� � ������
if (FileExists(PHOTO_FILENAME)) {
UniQueryEx->ParamByName("PHOTO")->LoadFromFile(PHOTO_FILENAME, ftBlob);
}

UniQueryEx->ExecSQL();

Close(); //��������� ����

}
//---------------------------------------------------------------------------
void __fastcall TAddEditUserForm::bsSkinSpeedButton1Click(TObject *Sender)
{
//��������� ������� ������ ���������
if (TYPE=="EDIT") { //���� ����� �������������� �� ��������  EditData ����� AddData
EditData();
} else {
AddData();
}
}
//---------------------------------------------------------------------------
void __fastcall TAddEditUserForm::bsSkinSpeedButton2Click(TObject *Sender)
{
//��������� ������� ������ �������
Close();
}
//---------------------------------------------------------------------------
void __fastcall TAddEditUserForm::bsSkinSpeedButton3Click(TObject *Sender)
{
//��������� ������ ������ ������� ����
if (OpenImageEnDialog1->Execute()) {

ImageEnDBView1->Visible=false;
ImageEnView1->Visible=true;

PHOTO_FILENAME=OpenImageEnDialog1->FileName;
ImageEnIO1->LoadFromFile(PHOTO_FILENAME);
}
}
//---------------------------------------------------------------------------
void __fastcall TAddEditUserForm::FormShow(TObject *Sender)
{
//��������� ������� ������ �����, ���� �������������� �� ��������  ShowData
if (TYPE=="EDIT") {
ShowData();
} else {
ImageEnDBView1->Visible=false;
ImageEnView1->Visible=true;
}
}
//---------------------------------------------------------------------------
