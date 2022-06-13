//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uBaseProdsServs.h"
#include "uMain.h"
#include "uAddEditProdsServs.h"
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
#pragma link "FormSize"
#pragma link "GridsEh"
#pragma link "MemDS"
#pragma link "ToolCtrlsEh"
#pragma link "Uni"
#pragma link "bsSkinBoxCtrls"
#pragma resource "*.dfm"
TBaseProdsServsForm *BaseProdsServsForm;
//---------------------------------------------------------------------------
__fastcall TBaseProdsServsForm::TBaseProdsServsForm(TComponent* Owner)
	: TForm(Owner)
{
UniTable_Products->Close();
UniTable_Products->Open();
}
//---------------------------------------------------------------------------
void __fastcall TBaseProdsServsForm::FormClose(TObject *Sender, TCloseAction &Action)

{
//загружаем старые настройки дл€ сетки таблицы
DBGridEh->SaveColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "DBGridEhBaseProdsServsForm"+MainForm->ACTIVE_USER_ID, true);



}
//---------------------------------------------------------------------------
void __fastcall TBaseProdsServsForm::bsSkinSpeedButton4Click(TObject *Sender)
{
if (UniTable_Products->RecordCount==0) {
return;
}

switch (MessageDlg("¬ы уверены что хотите удалить товар/услугу из каталога?", mtConfirmation,TMsgDlgButtons() << mbOK << mbCancel, 0)) {
case mrCancel: {return;};
}

UniQueryDEL->Close();
UniQueryDEL->SQL->Text="DELETE FROM prods_servs WHERE _ID=:ID";
UniQueryDEL->ParamByName("ID")->AsString=UniTable_Products->FieldByName("_ID")->AsString;
UniQueryDEL->ExecSQL();

UniTable_Products->Close();
UniTable_Products->Open();
}
//---------------------------------------------------------------------------
void __fastcall TBaseProdsServsForm::bsSkinSpeedButton3Click(TObject *Sender)
{
if (UniTable_Products->RecordCount==0) {
return;
}

TAddEditProductsForm *pAddEditProductsForm = new TAddEditProductsForm(this, UniTable_Products->FieldByName("_ID")->AsString);

try {
pAddEditProductsForm->ShowModal();
} __finally {

delete pAddEditProductsForm;
pAddEditProductsForm=NULL;
UniTable_Products->Close();
UniTable_Products->Open();
}
}
//---------------------------------------------------------------------------
void __fastcall TBaseProdsServsForm::bsSkinSpeedButton2Click(TObject *Sender)
{
TAddEditProductsForm *pAddEditProductsForm = new TAddEditProductsForm(this, "");

try {
pAddEditProductsForm->ShowModal();
} __finally {

delete pAddEditProductsForm;
pAddEditProductsForm=NULL;
UniTable_Products->Close();
UniTable_Products->Open();
}
}
//---------------------------------------------------------------------------
void __fastcall TBaseProdsServsForm::FormCreate(TObject *Sender)
{
DBGridEh->RestoreColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "DBGridEhBaseProdsServsForm"+MainForm->ACTIVE_USER_ID, TColumnEhRestoreParams() << crpColIndexEh << crpColWidthsEh << crpSortMarkerEh << crpColVisibleEh << crpDropDownRowsEh << crpDropDownWidthEh);

//заполнение списка фильтра категории
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
void __fastcall TBaseProdsServsForm::DBGridEhTitleBtnClick(TObject *Sender,
          int ACol, TColumnEh *Column)
{
static String OLD_title="";
static bool SortMode=true;

TDBGridEh *temp_grid = dynamic_cast<TDBGridEh*>(Sender);

TUniTable *temp_table = dynamic_cast<TUniTable*>(temp_grid->DataSource->DataSet);

UnicodeString FLD=Column->FieldName;

if (OLD_title!=FLD) {
SortMode=true;
}

if (SortMode) {
temp_table->OrderFields="`"+FLD+"`";
} else {
temp_table->OrderFields="`"+FLD+"` DESC";
}

OLD_title=FLD;
SortMode=!SortMode;
}
//---------------------------------------------------------------------------
void __fastcall TBaseProdsServsForm::bsSkinSpeedButton5Click(TObject *Sender)
{
GRID_EXPORT_XLS(DBGridEh);
}
//---------------------------------------------------------------------------
void __fastcall TBaseProdsServsForm::bsSkinSpeedButton1Click(TObject *Sender)
{
UniTable_Products->Close();
UniTable_Products->Open();
}
//---------------------------------------------------------------------------
void __fastcall TBaseProdsServsForm::bsSkinSpeedButton6Click(TObject *Sender)
{
//UniTable_Products->Close();
UniTable_Products->Filter="_TYPE='"+bsSkinComboBox1->Text+"'";
UniTable_Products->Filtered=true;
//UniTable_Products->Open();
}
//---------------------------------------------------------------------------

void __fastcall TBaseProdsServsForm::bsSkinSpeedButton7Click(TObject *Sender)
{
bsSkinComboBox1->Text="";
UniTable_Products->Filter="";
UniTable_Products->Filtered=false;
}
//---------------------------------------------------------------------------

