//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uBaseClients.h"
#include "uMain.h"
#include "uAddEditClient.h"

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
#pragma link "DataDriverEh"
#pragma link "MemTableDataEh"
#pragma link "MemTableEh"
#pragma link "FormSize"
#pragma resource "*.dfm"
TBaseClientsForm *BaseClientsForm;
//---------------------------------------------------------------------------
__fastcall TBaseClientsForm::TBaseClientsForm(TComponent* Owner)
	: TForm(Owner)
{

UniTable_Clients->Close();
UniTable_Clients->Open();

}
//---------------------------------------------------------------------------
void __fastcall TBaseClientsForm::FormClose(TObject *Sender, TCloseAction &Action)

{
DBGridEh_clients->SaveColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "DBGridEh_clientsTBaseClientsForm"+MainForm->ACTIVE_USER_ID, true);

}
//---------------------------------------------------------------------------
void __fastcall TBaseClientsForm::bsSkinSpeedButton4Click(TObject *Sender)
{
if (UniTable_Clients->RecordCount==0) {
return;
}

switch (MessageDlg("¬ы уверены что хотите удалить клиента?", mtConfirmation,TMsgDlgButtons() << mbOK << mbCancel, 0)) {
case mrCancel: {return;};
}

UniQueryDEL->Close();
UniQueryDEL->SQL->Text="DELETE FROM clients WHERE _ID=:ID";
UniQueryDEL->ParamByName("ID")->AsString=UniTable_Clients->FieldByName("_ID")->AsString;
UniQueryDEL->ExecSQL();

UniTable_Clients->Close();
UniTable_Clients->Open();
}
//---------------------------------------------------------------------------
void __fastcall TBaseClientsForm::bsSkinSpeedButton3Click(TObject *Sender)
{
if (UniTable_Clients->RecordCount==0) {
return;
}

TAddEditClientForm *pAddEditClientForm = new TAddEditClientForm(this, UniTable_Clients->FieldByName("_ID")->AsString);

try {
pAddEditClientForm->ShowModal();
} __finally {

delete pAddEditClientForm;
pAddEditClientForm=NULL;
UniTable_Clients->Close();
UniTable_Clients->Open();
}
}
//---------------------------------------------------------------------------
void __fastcall TBaseClientsForm::bsSkinSpeedButton2Click(TObject *Sender)
{
TAddEditClientForm *pAddEditClientForm = new TAddEditClientForm(this, "");

try {
pAddEditClientForm->ShowModal();
} __finally {

delete pAddEditClientForm;
pAddEditClientForm=NULL;
UniTable_Clients->Close();
UniTable_Clients->Open();
}
}
//---------------------------------------------------------------------------
void __fastcall TBaseClientsForm::FormCreate(TObject *Sender)
{
DBGridEh_clients->RestoreColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "DBGridEh_clientsTBaseClientsForm"+MainForm->ACTIVE_USER_ID, TColumnEhRestoreParams() << crpColIndexEh << crpColWidthsEh << crpSortMarkerEh << crpColVisibleEh << crpDropDownRowsEh << crpDropDownWidthEh);
}
//---------------------------------------------------------------------------

void __fastcall TBaseClientsForm::DBGridEh_clientsTitleBtnClick(TObject *Sender, int ACol,
		  TColumnEh *Column)
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

void __fastcall TBaseClientsForm::DBGridEh_clientsDblClick(TObject *Sender)
{

TDBGridEh *temp_grid = dynamic_cast<TDBGridEh*>(Sender);

TPoint Pt;
Pt.X = Mouse->CursorPos.X;
Pt.Y = Mouse->CursorPos.Y;
Pt = temp_grid->ScreenToClient(Pt);

int unused_h=temp_grid->Columns->Items[0]->GetCellHeight(0)+30;

if (Pt.Y<=unused_h) {
return;
}

bsSkinSpeedButton3Click(NULL);

}
//---------------------------------------------------------------------------

void __fastcall TBaseClientsForm::bsSkinSpeedButton5Click(TObject *Sender)
{
GRID_EXPORT_XLS(DBGridEh_clients);
}
//---------------------------------------------------------------------------

void __fastcall TBaseClientsForm::bsSkinSpeedButton1Click(TObject *Sender)
{
UniTable_Clients->Close();
UniTable_Clients->Open();
}
//---------------------------------------------------------------------------
