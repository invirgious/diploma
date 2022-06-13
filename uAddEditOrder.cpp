//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uAddEditOrder.h"
#include "uMain.h"
#include "uAddToOrder.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "bsSkinBoxCtrls"
#pragma link "bsSkinCtrls"
#pragma link "BusinessSkinForm"
#pragma link "DBAccess"
#pragma link "DBAxisGridsEh"
#pragma link "DBGridEh"
#pragma link "DBGridEhGrouping"
#pragma link "DBGridEhToolCtrls"
#pragma link "DynVarsEh"
#pragma link "EhLibVCL"
#pragma link "FormSize"
#pragma link "GridsEh"
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
#pragma link "MemDS"
#pragma link "ToolCtrlsEh"
#pragma link "Uni"
#pragma link "ieview"
#pragma link "imageenview"
#pragma resource "*.dfm"
TAddEditOrderForm *AddEditOrderForm;
//---------------------------------------------------------------------------
__fastcall TAddEditOrderForm::TAddEditOrderForm(TComponent* Owner, String pID)
	: TForm(Owner)
{

client_ids = new TStringList();

if (pID=="") {
TYPE="ADD";
MAIN_ID=IDGen("SELL_");
Caption="Продажа (ДОБАВИТЬ)";
} else {
TYPE="EDIT";
MAIN_ID=pID;
Caption="Продажа (РЕДАКТИРОВАТЬ)";
}

LoadingData();

UniQuery_Items->Close();
UniQuery_Items->SQL->Text="SELECT sells_items._ID, sells_items._SELL_ID, sells_items._PROD_SERV_ID, sells_items._COUNT, sells_items._SUM, prods_servs._TITLE, prods_servs._PRICE, prods_servs._TYPE FROM sells_items INNER JOIN prods_servs ON sells_items._PROD_SERV_ID = prods_servs._ID WHERE _SELL_ID=:SELL_ID";
UniQuery_Items->ParamByName("SELL_ID")->AsString=MAIN_ID;
UniQuery_Items->Open();


}
//---------------------------------------------------------------------------
void __fastcall TAddEditOrderForm::bsSkinSpeedButton2Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TAddEditOrderForm::bsSkinSpeedButton5Click(TObject *Sender)
{
TAddToOrderForm *pAddToOrderForm = new TAddToOrderForm(this);

try {
if (pAddToOrderForm->ShowModal()==mrOk) {

String PROD_ID=pAddToOrderForm->UniTable_Products->FieldByName("_ID")->AsString;

UniQueryEx->Close();
UniQueryEx->SQL->Text="INSERT INTO sells_items (_ID ,_SELL_ID ,_PROD_SERV_ID ,_COUNT ,_SUM) VALUES (:ID ,:SELL_ID ,:PROD_SERV_ID ,:COUNT ,:SUM);";
UniQueryEx->ParamByName("ID")->AsString=IDGen("SI_");
UniQueryEx->ParamByName("SELL_ID")->AsString=MAIN_ID;
UniQueryEx->ParamByName("PROD_SERV_ID")->AsString=PROD_ID;
UniQueryEx->ParamByName("COUNT")->AsString=1;
UniQueryEx->ParamByName("SUM")->AsString=0;
UniQueryEx->ExecSQL();

UniQuery_Items->Close();
UniQuery_Items->Open();


}
} __finally {

delete pAddToOrderForm;
pAddToOrderForm=NULL;

}

}
//---------------------------------------------------------------------------
void TAddEditOrderForm::LoadingData(){

UniQueryEx->Close();
UniQueryEx->SQL->Clear();
UniQueryEx->SQL->Text="SELECT _ID, _FIRST_NAME, _LAST_NAME, _MIDDLE_NAME FROM clients ORDER BY _LAST_NAME";
UniQueryEx->Open();

bsSkinComboBox1->Items->Clear();

while (!UniQueryEx->Eof){
bsSkinComboBox1->Items->Add(UniQueryEx->FieldByName("_LAST_NAME")->AsString+" "+UniQueryEx->FieldByName("_FIRST_NAME")->AsString+" "+UniQueryEx->FieldByName("_MIDDLE_NAME")->AsString);
client_ids->Add(UniQueryEx->FieldByName("_ID")->AsString);
UniQueryEx->Next();
}


}
//---------------------------------------------------------------------------
double TAddEditOrderForm::CALC_SUM(){

double full_sum=0;

UniQuery_Items->First();
while (!UniQuery_Items->Eof){
full_sum+=UniQuery_Items->FieldByName("SHOW_SUM")->AsFloat;
UniQuery_Items->Next();
}

return full_sum;

}
//---------------------------------------------------------------------------
void TAddEditOrderForm::ShowData(){

UniQueryShow->Close();
UniQueryShow->SQL->Text="SELECT * FROM sells WHERE _ID=:ID";
UniQueryShow->ParamByName("ID")->AsString=MAIN_ID;
UniQueryShow->Open();

SET_FIELD_VALUE(UniQueryShow->FieldByName("_DATE"), bsSkinDateEdit1);
bsSkinComboBox1->ItemIndex=client_ids->IndexOf(UniQueryShow->FieldByName("_CLIENT_ID")->AsString);
bsSkinCurrencyEdit1->Value=UniQueryShow->FieldByName("_FULL_SUM")->AsFloat;

}
//---------------------------------------------------------------------------
void TAddEditOrderForm::AddData(){

UniQueryEx->Close();
UniQueryEx->SQL->Text="INSERT INTO sells (_ID ,_DATE ,_FULL_SUM ,_CLIENT_ID, _USER_ID) VALUES (:ID ,:DATE ,:FULL_SUM ,:CLIENT_ID, :USER_ID);";

UniQueryEx->ParamByName("ID")->AsString=MAIN_ID;
SET_PARAM_VALUE(UniQueryEx->ParamByName("DATE"), bsSkinDateEdit1);
UniQueryEx->ParamByName("CLIENT_ID")->AsString=client_ids->Strings[bsSkinComboBox1->ItemIndex];

UniQueryEx->ParamByName("FULL_SUM")->AsFloat=CALC_SUM();
UniQueryEx->ParamByName("USER_ID")->AsString=MainForm->ACTIVE_USER_NAME;


UniQueryEx->ExecSQL();

Close();

}
//---------------------------------------------------------------------------
void TAddEditOrderForm::EditData(){


UniQueryEx->Close();

UniQueryEx->SQL->Text="UPDATE sells SET _DATE = :DATE ,_FULL_SUM = :FULL_SUM ,_CLIENT_ID = :CLIENT_ID WHERE _ID = :ID;";

UniQueryEx->ParamByName("ID")->AsString=MAIN_ID;
SET_PARAM_VALUE(UniQueryEx->ParamByName("DATE"), bsSkinDateEdit1);
UniQueryEx->ParamByName("CLIENT_ID")->AsString=client_ids->Strings[bsSkinComboBox1->ItemIndex];

UniQueryEx->ParamByName("FULL_SUM")->AsFloat=CALC_SUM();

UniQueryEx->ExecSQL();

Close();

}
//---------------------------------------------------------------------------

void __fastcall TAddEditOrderForm::bsSkinSpeedButton4Click(TObject *Sender)
{
if (UniQuery_Items->RecordCount==0) {
return;
}

switch (MessageDlg("Вы уверены что хотите удалить запись?", mtConfirmation,TMsgDlgButtons() << mbOK << mbCancel, 0)) {
case mrCancel: {return;};
}

UniQueryDEL->Close();
UniQueryDEL->SQL->Text="DELETE FROM sells_items WHERE _ID=:ID";
UniQueryDEL->ParamByName("ID")->AsString=UniQuery_Items->FieldByName("_ID")->AsString;
UniQueryDEL->ExecSQL();

UniQuery_Items->Close();
UniQuery_Items->Open();
}
//---------------------------------------------------------------------------

void __fastcall TAddEditOrderForm::UniQuery_ItemsCalcFields(TDataSet *DataSet)
{
DataSet->FieldByName("SHOW_SUM")->AsFloat=DataSet->FieldByName("_COUNT")->AsFloat*DataSet->FieldByName("_PRICE")->AsFloat;
}
//---------------------------------------------------------------------------

void __fastcall TAddEditOrderForm::UniQuery_ItemsAfterOpen(TDataSet *DataSet)
{
bsSkinCurrencyEdit1->Value=CALC_SUM();
}
//---------------------------------------------------------------------------

void __fastcall TAddEditOrderForm::bsSkinSpeedButton1Click(TObject *Sender)
{
if (TYPE=="EDIT") {
EditData();
} else {
AddData();
}
}
//---------------------------------------------------------------------------

void __fastcall TAddEditOrderForm::FormShow(TObject *Sender)
{
if (TYPE=="EDIT") {
ShowData();
}
}
//---------------------------------------------------------------------------

