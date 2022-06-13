//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uBaseOrders.h"
#include "uMain.h"
#include "uAddEditOrder.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "bsSkinTabs"
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
#pragma resource "*.dfm"
TBaseOrdersForm *BaseOrdersForm;
//---------------------------------------------------------------------------
__fastcall TBaseOrdersForm::TBaseOrdersForm(TComponent* Owner)
	: TForm(Owner)
{

UniTable_Orders->Close();
UniTable_Orders->Open();

}
//---------------------------------------------------------------------------
void __fastcall TBaseOrdersForm::FormClose(TObject *Sender, TCloseAction &Action)

{
DBGridEh_orders->SaveColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "DBGridEh_ordersTBaseProdsServsForm"+MainForm->ACTIVE_USER_ID, true);

}
//---------------------------------------------------------------------------
void __fastcall TBaseOrdersForm::bsSkinSpeedButton4Click(TObject *Sender)
{
if (UniTable_Orders->RecordCount==0) {
return;
}

switch (MessageDlg("¬ы уверены что хотите удалить продажу?", mtConfirmation,TMsgDlgButtons() << mbOK << mbCancel, 0)) {
case mrCancel: {return;};
}

UniQueryDEL->Close();
UniQueryDEL->SQL->Text="DELETE FROM sells WHERE _ID=:ID";
UniQueryDEL->ParamByName("ID")->AsString=UniTable_Orders->FieldByName("_ID")->AsString;
UniQueryDEL->ExecSQL();

UniQueryDEL->Close();
UniQueryDEL->SQL->Text="DELETE FROM sells_items WHERE _SELL_ID=:ID";
UniQueryDEL->ParamByName("ID")->AsString=UniTable_Orders->FieldByName("_ID")->AsString;
UniQueryDEL->ExecSQL();

UniTable_Orders->Close();
UniTable_Orders->Open();
}
//---------------------------------------------------------------------------

void __fastcall TBaseOrdersForm::bsSkinSpeedButton3Click(TObject *Sender)
{
if (UniTable_Orders->RecordCount==0) {
return;
}

TAddEditOrderForm *pAddEditOrderForm = new TAddEditOrderForm(this, UniTable_Orders->FieldByName("_ID")->AsString);

try {
pAddEditOrderForm->ShowModal();
} __finally {

delete pAddEditOrderForm;
pAddEditOrderForm=NULL;
UniTable_Orders->Close();
UniTable_Orders->Open();
}
}
//---------------------------------------------------------------------------

void __fastcall TBaseOrdersForm::bsSkinSpeedButton2Click(TObject *Sender)
{
TAddEditOrderForm *pAddEditOrderForm = new TAddEditOrderForm(this, "");

try {
pAddEditOrderForm->ShowModal();
} __finally {

delete pAddEditOrderForm;
pAddEditOrderForm=NULL;
UniTable_Orders->Close();
UniTable_Orders->Open();
}
}
//---------------------------------------------------------------------------

void __fastcall TBaseOrdersForm::FormCreate(TObject *Sender)
{
DBGridEh_orders->RestoreColumnsLayoutIni(ExtractFilePath(Application->ExeName)+"GRIDS.ini", "DBGridEh_ordersTBaseProdsServsForm"+MainForm->ACTIVE_USER_ID, TColumnEhRestoreParams() << crpColIndexEh << crpColWidthsEh << crpSortMarkerEh << crpColVisibleEh << crpDropDownRowsEh << crpDropDownWidthEh);

}
//---------------------------------------------------------------------------

void __fastcall TBaseOrdersForm::bsSkinSpeedButton5Click(TObject *Sender)
{
GRID_EXPORT_XLS(DBGridEh_orders);
}
//---------------------------------------------------------------------------

void __fastcall TBaseOrdersForm::bsSkinSpeedButton1Click(TObject *Sender)
{
UniTable_Orders->Close();
UniTable_Orders->Open();
}
//---------------------------------------------------------------------------

void __fastcall TBaseOrdersForm::DBGridEh_ordersTitleBtnClick(TObject *Sender, int ACol,
          TColumnEh *Column)
{
static String OLD_title="";
static bool SortMode=true;

UnicodeString FLD=Column->FieldName;


if (OLD_title!=FLD) {
SortMode=true;
}

//переоткрываем запрос но с дополнительным текстом в котором указываем сортируемый столбец
UniTable_Orders->Close();
UniTable_Orders->SQL->Text="SELECT clients._FIRST_NAME, clients._LAST_NAME, clients._MIDDLE_NAME, sells._DATE, clients._CLUB_CARD_NUM, sells._FULL_SUM, sells._CLIENT_ID, sells._ID, sells._USER_ID FROM sells INNER JOIN clients ON sells._CLIENT_ID = clients._ID ";

if (SortMode) {
UniTable_Orders->SQL->Add(" ORDER BY `"+FLD+"`");     //дополнительный текст запроса с сортируемым столбцом
} else {
UniTable_Orders->SQL->Add(" ORDER BY `"+FLD+"` DESC"); //дополнительный текст запроса с сортируемым столбцом но обратна€ сортировка
}

OLD_title=FLD;
SortMode=!SortMode;

UniTable_Orders->Open();
}
//---------------------------------------------------------------------------

