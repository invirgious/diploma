//---------------------------------------------------------------------------

#ifndef uAddToOrderH
#define uAddToOrderH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "bsSkinCtrls.hpp"
#include "DBAccess.hpp"
#include "DBAxisGridsEh.hpp"
#include "DBGridEh.hpp"
#include "DBGridEhGrouping.hpp"
#include "DBGridEhToolCtrls.hpp"
#include "DynVarsEh.hpp"
#include "EhLibVCL.hpp"
#include "GridsEh.hpp"
#include "MemDS.hpp"
#include "ToolCtrlsEh.hpp"
#include "Uni.hpp"
#include <Data.DB.hpp>
#include "BusinessSkinForm.hpp"
//---------------------------------------------------------------------------
class TAddToOrderForm : public TForm
{
__published:	// IDE-managed Components
	TbsSkinPanel *bsSkinPanel2;
	TDBGridEh *DBGridEh;
	TUniTable *UniTable_Products;
	TStringField *UniTable_Products_ID;
	TStringField *UniTable_Products_TITLE;
	TFloatField *UniTable_Products_PRICE;
	TMemoField *UniTable_Products_NOTE;
	TStringField *UniTable_Products_TYPE;
	TStringField *UniTable_Products_BARCODE;
	TBlobField *UniTable_Products_PREVIEW;
	TUniDataSource *UniDataSource_Products;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	void __fastcall DBGridEhDblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAddToOrderForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddToOrderForm *AddToOrderForm;
//---------------------------------------------------------------------------
#endif
