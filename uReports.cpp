//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uReports.h"
#include "uMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "bsSkinTabs"
#pragma link "frxClass"
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "Uni"
#pragma link "bsSkinBoxCtrls"
#pragma link "bsSkinCtrls"
#pragma link "frxDBSet"
#pragma link "BusinessSkinForm"
#pragma resource "*.dfm"
TReportsForm *ReportsForm;
//---------------------------------------------------------------------------
__fastcall TReportsForm::TReportsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TReportsForm::bsSkinSpeedButton2Click(TObject *Sender)
{
//отчет по продажам
UniQuerySellReport->Close();
UniQuerySellReport->SQL->Text="SELECT clients._FIRST_NAME, clients._LAST_NAME, clients._MIDDLE_NAME, sells._DATE, clients._CLUB_CARD_NUM, sells._FULL_SUM, sells._CLIENT_ID, sells._ID, sells._USER_ID FROM sells INNER JOIN clients ON sells._CLIENT_ID = clients._ID WHERE _DATE>=:DATE1 AND _DATE<=:DATE2 AND _USER_ID LIKE :USER_ID";
UniQuerySellReport->ParamByName("DATE1")->AsDate=bsSkinDateEdit1->Date;
UniQuerySellReport->ParamByName("DATE2")->AsDate=bsSkinDateEdit2->Date;
UniQuerySellReport->ParamByName("USER_ID")->AsString="%"+bsSkinComboBox1->Text+"%";
UniQuerySellReport->Open();

frxReport1->ShowReport(true);

}
//---------------------------------------------------------------------------

void __fastcall TReportsForm::UniQuerySellReportAfterScroll(TDataSet *DataSet)
{
//проходимся по каждой продаже чтобы отобразить товары и услуги в отчете
UniQuerySubSellRep->Close();
UniQuerySubSellRep->FilterSQL="_SELL_ID='"+UniQuerySellReport->FieldByName("_ID")->AsString+"'";
UniQuerySubSellRep->Open();
}
//---------------------------------------------------------------------------

void __fastcall TReportsForm::bsSkinSpeedButton1Click(TObject *Sender)
{
UniTableClientsRep->Close();

if (bsSkinRadioGroup1->ItemIndex==0) {
UniTableClientsRep->FilterSQL="";
}

if (bsSkinRadioGroup1->ItemIndex==1) {
UniTableClientsRep->FilterSQL="_GENDER='Мужской'";
}

if (bsSkinRadioGroup1->ItemIndex==2) {
UniTableClientsRep->FilterSQL="_GENDER='Женский'";
}

UniTableClientsRep->Open();

frxReport2->ShowReport(true);
}
//---------------------------------------------------------------------------

void __fastcall TReportsForm::UniQuerySubSellRepCalcFields(TDataSet *DataSet)
{
DataSet->FieldByName("SHOW_SUM")->AsFloat=DataSet->FieldByName("_COUNT")->AsFloat*DataSet->FieldByName("_PRICE")->AsFloat;
}
//---------------------------------------------------------------------------

void __fastcall TReportsForm::FormCreate(TObject *Sender)
{
UniQueryEx->Close();
UniQueryEx->SQL->Clear();
UniQueryEx->SQL->Text="SELECT _ID, _NAME, _LAST_NAME, _MIDDLE_NAME FROM users ORDER BY _LAST_NAME";
UniQueryEx->Open();

bsSkinComboBox1->Items->Clear();
bsSkinComboBox1->Items->Add("");

while (!UniQueryEx->Eof){
bsSkinComboBox1->Items->Add(UniQueryEx->FieldByName("_LAST_NAME")->AsString+" "+UniQueryEx->FieldByName("_NAME")->AsString+" "+UniQueryEx->FieldByName("_MIDDLE_NAME")->AsString);
UniQueryEx->Next();
}
}
//---------------------------------------------------------------------------

