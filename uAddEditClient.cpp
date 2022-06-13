//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uAddEditClient.h"
#include "uMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "bsSkinBoxCtrls"
#pragma link "bsSkinCtrls"
#pragma link "BusinessSkinForm"
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "Uni"
#pragma link "FormSize"
#pragma link "hyiedefs"
#pragma link "hyieutils"
#pragma link "ieopensavedlg"
#pragma link "iesettings"
#pragma link "iexBitmaps"
#pragma link "iexLayers"
#pragma link "iexRulers"
#pragma link "iexToolbars"
#pragma link "iexUserInteractions"
#pragma link "imageenio"
#pragma link "dbimageen"
#pragma link "ieview"
#pragma link "imageenview"
#pragma resource "*.dfm"
TAddEditClientForm *AddEditClientForm;
//---------------------------------------------------------------------------
__fastcall TAddEditClientForm::TAddEditClientForm(TComponent* Owner, String pID)
	: TForm(Owner)
{

PHOTO_FILENAME="";

if (pID=="") {
TYPE="ADD";
MAIN_ID=IDGen("COMP_");
Caption="Êëèåíò (ÄÎÁÀÂÈÒÜ)";
} else {
TYPE="EDIT";
MAIN_ID=pID;
Caption="Êëèåíò (ÐÅÄÀÊÒÈÐÎÂÀÒÜ)";
}



}
//---------------------------------------------------------------------------

void TAddEditClientForm::ShowData(){

ImageEnDBView1->Visible=true;
ImageEnView1->Visible=false;

UniQueryShow->Close();
UniQueryShow->SQL->Text="SELECT * FROM clients WHERE _ID=:ID";
UniQueryShow->ParamByName("ID")->AsString=MAIN_ID;
UniQueryShow->Open();


if (UniQueryShow->FieldByName("_GENDER")->AsString=="Ìóæñêîé") {
RadioButton1->Checked=true;
RadioButton2->Checked=false;
} else {
RadioButton1->Checked=false;
RadioButton2->Checked=true;
}

SET_FIELD_VALUE(UniQueryShow->FieldByName("_BIRTHDAY"), bsSkinDateEdit1);

bsSkinEdit2->Text=UniQueryShow->FieldByName("_FIRST_NAME")->AsString;
bsSkinEdit3->Text=UniQueryShow->FieldByName("_LAST_NAME")->AsString;
bsSkinEdit4->Text=UniQueryShow->FieldByName("_MIDDLE_NAME")->AsString;

bsSkinEdit7->Text=UniQueryShow->FieldByName("_EMAIL")->AsString;
bsSkinEdit6->Text=UniQueryShow->FieldByName("_PHONE")->AsString;
bsSkinEdit1->Text=UniQueryShow->FieldByName("_CLUB_CARD_NUM")->AsString;


}
//---------------------------------------------------------------------------
void TAddEditClientForm::AddData(){

UniQueryEx->Close();
UniQueryEx->SQL->Text="INSERT INTO clients (  _ID ,_FIRST_NAME ,_LAST_NAME ,_MIDDLE_NAME ,_GENDER ,_BIRTHDAY ,_CLIENT_PHOTO ,_EMAIL ,_PHONE ,_CLUB_CARD_NUM) VALUES (  :ID ,:FIRST_NAME ,:LAST_NAME ,:MIDDLE_NAME ,:GENDER ,:BIRTHDAY ,:CLIENT_PHOTO ,:EMAIL ,:PHONE ,:CLUB_CARD_NUM);";

UniQueryEx->ParamByName("ID")->AsString=MAIN_ID;
UniQueryEx->ParamByName("FIRST_NAME")->AsString=bsSkinEdit2->Text;
UniQueryEx->ParamByName("LAST_NAME")->AsString=bsSkinEdit3->Text;
UniQueryEx->ParamByName("MIDDLE_NAME")->AsString=bsSkinEdit4->Text;

if (RadioButton1->Checked) {
UniQueryEx->ParamByName("GENDER")->AsString="Ìóæñêîé";
} else {
UniQueryEx->ParamByName("GENDER")->AsString="Æåíñêèé";
}

SET_PARAM_VALUE(UniQueryEx->ParamByName("BIRTHDAY"), bsSkinDateEdit1);

UniQueryEx->ParamByName("EMAIL")->AsString=bsSkinEdit7->Text;
UniQueryEx->ParamByName("PHONE")->AsString=bsSkinEdit6->Text;
UniQueryEx->ParamByName("CLUB_CARD_NUM")->AsString=bsSkinEdit1->Text;

if (FileExists(PHOTO_FILENAME)) {
UniQueryEx->ParamByName("CLIENT_PHOTO")->LoadFromFile(PHOTO_FILENAME, ftBlob);
}


UniQueryEx->ExecSQL();

//TYPE="EDIT";
Close();

}
//---------------------------------------------------------------------------
void TAddEditClientForm::EditData(){


UniQueryEx->Close();
if (FileExists(PHOTO_FILENAME)) {
UniQueryEx->SQL->Text="UPDATE clients SET _CLIENT_PHOTO = :CLIENT_PHOTO ,_FIRST_NAME = :FIRST_NAME ,_LAST_NAME = :LAST_NAME ,_MIDDLE_NAME = :MIDDLE_NAME ,_GENDER = :GENDER ,_BIRTHDAY = :BIRTHDAY ,_EMAIL = :EMAIL ,_PHONE = :PHONE ,_CLUB_CARD_NUM = :CLUB_CARD_NUM WHERE _ID = :ID;";
UniQueryEx->ParamByName("CLIENT_PHOTO")->LoadFromFile(PHOTO_FILENAME, ftBlob);
} else {
UniQueryEx->SQL->Text="UPDATE clients SET _FIRST_NAME = :FIRST_NAME ,_LAST_NAME = :LAST_NAME ,_MIDDLE_NAME = :MIDDLE_NAME ,_GENDER = :GENDER ,_BIRTHDAY = :BIRTHDAY ,_EMAIL = :EMAIL ,_PHONE = :PHONE ,_CLUB_CARD_NUM = :CLUB_CARD_NUM WHERE _ID = :ID;";

}

UniQueryEx->ParamByName("ID")->AsString=MAIN_ID;
UniQueryEx->ParamByName("FIRST_NAME")->AsString=bsSkinEdit2->Text;
UniQueryEx->ParamByName("LAST_NAME")->AsString=bsSkinEdit3->Text;
UniQueryEx->ParamByName("MIDDLE_NAME")->AsString=bsSkinEdit4->Text;

if (RadioButton1->Checked) {
UniQueryEx->ParamByName("GENDER")->AsString="Ìóæñêîé";
} else {
UniQueryEx->ParamByName("GENDER")->AsString="Æåíñêèé";
}

SET_PARAM_VALUE(UniQueryEx->ParamByName("BIRTHDAY"), bsSkinDateEdit1);

UniQueryEx->ParamByName("EMAIL")->AsString=bsSkinEdit7->Text;
UniQueryEx->ParamByName("PHONE")->AsString=bsSkinEdit6->Text;
UniQueryEx->ParamByName("CLUB_CARD_NUM")->AsString=bsSkinEdit1->Text;

UniQueryEx->ExecSQL();

Close();

}
//---------------------------------------------------------------------------
void __fastcall TAddEditClientForm::FormShow(TObject *Sender)
{
if (TYPE=="EDIT") {
ShowData();
} else {
ImageEnDBView1->Visible=false;
ImageEnView1->Visible=true;
}
}
//---------------------------------------------------------------------------
void __fastcall TAddEditClientForm::bsSkinSpeedButton1Click(TObject *Sender)
{
if (TYPE=="EDIT") {
EditData();
} else {
AddData();
}
}
//---------------------------------------------------------------------------
void __fastcall TAddEditClientForm::bsSkinSpeedButton2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TAddEditClientForm::bsSkinSpeedButton3Click(TObject *Sender)
{
if (OpenImageEnDialog1->Execute()) {

ImageEnDBView1->Visible=false;
ImageEnView1->Visible=true;

PHOTO_FILENAME=OpenImageEnDialog1->FileName;
ImageEnIO1->LoadFromFile(PHOTO_FILENAME);
}
}
//---------------------------------------------------------------------------

