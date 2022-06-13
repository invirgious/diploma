//---------------------------------------------------------------------------

#ifndef uBaseProdsServsH
#define uBaseProdsServsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "bsSkinCtrls.hpp"
#include "BusinessSkinForm.hpp"
#include "DBAccess.hpp"
#include "DBAxisGridsEh.hpp"
#include "DBGridEh.hpp"
#include "DBGridEhGrouping.hpp"
#include "DBGridEhToolCtrls.hpp"
#include "DynVarsEh.hpp"
#include "EhLibVCL.hpp"
#include "FormSize.hpp"
#include "GridsEh.hpp"
#include "MemDS.hpp"
#include "ToolCtrlsEh.hpp"
#include "Uni.hpp"
#include <Data.DB.hpp>
#include "bsSkinBoxCtrls.hpp"
//---------------------------------------------------------------------------
class TBaseProdsServsForm : public TForm
{
__published:	// IDE-managed Components
	TDBGridEh *DBGridEh;
	TbsSkinPanel *bsSkinPanel1;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TbsSkinSpeedButton *bsSkinSpeedButton3;
	TbsSkinSpeedButton *bsSkinSpeedButton4;
	TbsSkinSpeedButton *bsSkinSpeedButton5;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TUniTable *UniTable_Products;
	TUniDataSource *UniDataSource_Products;
	TUniQuery *UniQueryEx;
	TUniQuery *UniQueryDEL;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TFormSize *FormSize1;
	TStringField *UniTable_Products_ID;
	TStringField *UniTable_Products_TITLE;
	TFloatField *UniTable_Products_PRICE;
	TMemoField *UniTable_Products_NOTE;
	TStringField *UniTable_Products_TYPE;
	TStringField *UniTable_Products_BARCODE;
	TBlobField *UniTable_Products_PREVIEW;
	TbsSkinPanel *bsSkinPanel2;
	TbsSkinLabel *bsSkinLabel1;
	TbsSkinComboBox *bsSkinComboBox1;
	TbsSkinSpeedButton *bsSkinSpeedButton6;
	TbsSkinSpeedButton *bsSkinSpeedButton7;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall bsSkinSpeedButton4Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton3Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall DBGridEhTitleBtnClick(TObject *Sender, int ACol, TColumnEh *Column);
	void __fastcall bsSkinSpeedButton5Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton6Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton7Click(TObject *Sender);

private:	// User declarations
public:		// User declarations



	__fastcall TBaseProdsServsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBaseProdsServsForm *BaseProdsServsForm;
//---------------------------------------------------------------------------
#endif
