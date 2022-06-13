//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uAddEditProdsServs.h"
#include "uMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "bsSkinBoxCtrls"
#pragma link "bsSkinCtrls"
#pragma link "BusinessSkinForm"
#pragma link "DBAccess"
#pragma link "dbimageen"
#pragma link "FormSize"
#pragma link "hyiedefs"
#pragma link "hyieutils"
#pragma link "ieopensavedlg"
#pragma link "iesettings"
#pragma link "ieview"
#pragma link "iexBitmaps"
#pragma link "iexLayers"
#pragma link "iexRulers"
#pragma link "iexToolbars"
#pragma link "iexUserInteractions"
#pragma link "imageenio"
#pragma link "imageenview"
#pragma link "MemDS"
#pragma link "Uni"
#pragma link "clFtp"
#pragma link "clTcpClient"
#pragma link "clTcpClientTls"
#pragma link "clTcpCommandClient"
#pragma resource "*.dfm"
TAddEditProductsForm *AddEditProductsForm;
//---------------------------------------------------------------------------
__fastcall TAddEditProductsForm::TAddEditProductsForm(TComponent* Owner, String pID)
	: TForm(Owner)
{

PHOTO_FILENAME="";

if (pID=="") {
TYPE="ADD";
MAIN_ID=IDGen("PROD_");
Caption="Òîâàð/óñëóãà (ÄÎÁÀÂÈÒÜ)";
} else {
TYPE="EDIT";
MAIN_ID=pID;
Caption="Òîâàð/óñëóãà (ÐÅÄÀÊÒÈÐÎÂÀÒÜ)";
}

LoadingData();

}
//---------------------------------------------------------------------------
void TAddEditProductsForm::LoadingData(){

UniQueryEx->Close();
UniQueryEx->SQL->Clear();
UniQueryEx->SQL->Text="SELECT _TYPE FROM prods_servs GROUP BY _TYPE ORDER BY _TYPE";
UniQueryEx->Open();

bsSkinComboBox1->Items->Clear();

while (!UniQueryEx->Eof){
if (UniQueryEx->FieldByName("_TYPE")->AsString!="") {
bsSkinComboBox1->Items->Add(UniQueryEx->FieldByName("_TYPE")->AsString);
}

UniQueryEx->Next();
}

}
//---------------------------------------------------------------------------
void TAddEditProductsForm::ShowData(){

UniQueryShow->Close();
UniQueryShow->SQL->Text="SELECT * FROM prods_servs WHERE _ID=:ID";
UniQueryShow->ParamByName("ID")->AsString=MAIN_ID;
UniQueryShow->Open();


bsSkinEdit1->Text=UniQueryShow->FieldByName("_TITLE")->AsString;
bsSkinCurrencyEdit1->Value=UniQueryShow->FieldByName("_PRICE")->AsFloat;
bsSkinMemo1->Text=UniQueryShow->FieldByName("_NOTE")->AsString;
bsSkinComboBox1->Text=UniQueryShow->FieldByName("_TYPE")->AsString;
bsSkinEdit3->Text=UniQueryShow->FieldByName("_BARCODE")->AsString;

try {
ImageEnIO1->LoadFromFile(ExtractFilePath(Application->ExeName)+"images\\"+MAIN_ID+".jpg");
} catch (...) {
}

}
//---------------------------------------------------------------------------
void TAddEditProductsForm::AddData(){

UniQueryEx->Close();
UniQueryEx->SQL->Text="INSERT INTO prods_servs (_ID ,_TITLE ,_PRICE ,_NOTE ,_TYPE ,_BARCODE ,_PREVIEW) VALUES (:ID ,:TITLE ,:PRICE ,:NOTE ,:TYPE ,:BARCODE ,:PREVIEW);";

/*
  :ID
 ,:TITLE
 ,:PRICE
 ,:NOTE
 ,:TYPE
 ,:BARCODE
 ,:PREVIEW
*/

UniQueryEx->ParamByName("ID")->AsString=MAIN_ID;
UniQueryEx->ParamByName("TITLE")->AsString=bsSkinEdit1->Text;
UniQueryEx->ParamByName("PRICE")->AsFloat=bsSkinCurrencyEdit1->Value;
UniQueryEx->ParamByName("NOTE")->AsString=bsSkinMemo1->Text;
UniQueryEx->ParamByName("TYPE")->AsString=bsSkinComboBox1->Text;
UniQueryEx->ParamByName("BARCODE")->AsString=bsSkinEdit3->Text;

if (FileExists(PHOTO_FILENAME)) {
String out_img=ExtractFilePath(Application->ExeName)+"temp.jpg";
ConvertImage(PHOTO_FILENAME, out_img);
UniQueryEx->ParamByName("PREVIEW")->LoadFromFile(out_img, ftBlob);
}

UniQueryEx->ExecSQL();


//TYPE="EDIT";
Close();

}
//---------------------------------------------------------------------------
void TAddEditProductsForm::EditData(){


UniQueryEx->Close();

if (FileExists(PHOTO_FILENAME)) {
UniQueryEx->SQL->Text="UPDATE prods_servs SET _PREVIEW = :PREVIEW, _TITLE = :TITLE ,_PRICE = :PRICE ,_NOTE = :NOTE ,_TYPE = :TYPE ,_BARCODE = :BARCODE WHERE _ID = :ID";
} else {
UniQueryEx->SQL->Text="UPDATE prods_servs SET _TITLE = :TITLE ,_PRICE = :PRICE ,_NOTE = :NOTE ,_TYPE = :TYPE ,_BARCODE = :BARCODE WHERE _ID = :ID";
}


UniQueryEx->ParamByName("ID")->AsString=MAIN_ID;
UniQueryEx->ParamByName("TITLE")->AsString=bsSkinEdit1->Text;
UniQueryEx->ParamByName("PRICE")->AsFloat=bsSkinCurrencyEdit1->Value;
UniQueryEx->ParamByName("NOTE")->AsString=bsSkinMemo1->Text;
UniQueryEx->ParamByName("TYPE")->AsString=bsSkinComboBox1->Text;
UniQueryEx->ParamByName("BARCODE")->AsString=bsSkinEdit3->Text;

if (FileExists(PHOTO_FILENAME)) {
String out_img=ExtractFilePath(Application->ExeName)+"temp.jpg";
ConvertImage(PHOTO_FILENAME, out_img);
UniQueryEx->ParamByName("PREVIEW")->LoadFromFile(out_img, ftBlob);
}

UniQueryEx->ExecSQL();


Close();

}
//---------------------------------------------------------------------------
void __fastcall TAddEditProductsForm::FormShow(TObject *Sender)
{
if (TYPE=="EDIT") {
ShowData();
}
}
//---------------------------------------------------------------------------
void __fastcall TAddEditProductsForm::bsSkinSpeedButton1Click(TObject *Sender)
{
if (TYPE=="EDIT") {
EditData();
} else {
AddData();
}
}
//---------------------------------------------------------------------------
void __fastcall TAddEditProductsForm::bsSkinSpeedButton2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TAddEditProductsForm::bsSkinSpeedButton3Click(TObject *Sender)
{
if (OpenImageEnDialog1->Execute()) {

PHOTO_FILENAME=OpenImageEnDialog1->FileName;
ImageEnIO1->LoadFromFile(PHOTO_FILENAME);

}
}
//---------------------------------------------------------------------------

void TAddEditProductsForm::ConvertImage(String in, String out){

ImageEnIO_Convert->LoadFromFile(in);

String new_name=ExtractFilePath(Application->ExeName)+"images\\"+MAIN_ID+".jpg";
ImageEnIO_Convert->SaveToFileJpeg(new_name);

if (ImageEnIO_Convert->IEBitmap->Height>300 || ImageEnIO_Convert->IEBitmap->Width>300) {

double absy=0;


if (ImageEnIO_Convert->IEBitmap->Height>ImageEnIO_Convert->IEBitmap->Width) {
absy=ImageEnIO_Convert->IEBitmap->Height/400;
} else {
absy=ImageEnIO_Convert->IEBitmap->Width/400;
}

int new_w=ImageEnIO_Convert->IEBitmap->Width/absy;
int new_h=ImageEnIO_Convert->IEBitmap->Height/absy;

ImageEnIO_Convert->IEBitmap->Resample(new_w, new_h, rfLanczos3);
}

ImageEnIO_Convert->SaveToFileJpeg(out);

}
//---------------------------------------------------------------------------


