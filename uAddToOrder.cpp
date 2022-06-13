//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uAddToOrder.h"
#include "uMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "bsSkinCtrls"
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
#pragma link "BusinessSkinForm"
#pragma resource "*.dfm"
TAddToOrderForm *AddToOrderForm;
//---------------------------------------------------------------------------
__fastcall TAddToOrderForm::TAddToOrderForm(TComponent* Owner)
	: TForm(Owner)
{
UniTable_Products->Close();
UniTable_Products->Open();
}
//---------------------------------------------------------------------------
void __fastcall TAddToOrderForm::DBGridEhDblClick(TObject *Sender)
{
this->ModalResult=mrOk;
CloseModal();
}
//---------------------------------------------------------------------------
