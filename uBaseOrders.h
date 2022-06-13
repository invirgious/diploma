//---------------------------------------------------------------------------

#ifndef uBaseOrdersH
#define uBaseOrdersH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "bsSkinTabs.hpp"
#include <Vcl.ComCtrls.hpp>
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
//---------------------------------------------------------------------------
class TBaseOrdersForm : public TForm
{
__published:	// IDE-managed Components
	TDBGridEh *DBGridEh_orders;
	TbsSkinPanel *bsSkinPanel1;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TbsSkinSpeedButton *bsSkinSpeedButton3;
	TbsSkinSpeedButton *bsSkinSpeedButton4;
	TbsSkinSpeedButton *bsSkinSpeedButton5;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TUniDataSource *UniDataSource_Orders;
	TUniQuery *UniQueryEx;
	TUniQuery *UniQueryDEL;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TFormSize *FormSize1;
	TUniQuery *UniTable_Orders;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall bsSkinSpeedButton4Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton3Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall bsSkinSpeedButton5Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);
	void __fastcall DBGridEh_ordersTitleBtnClick(TObject *Sender, int ACol, TColumnEh *Column);

private:	// User declarations
public:		// User declarations

void SaveColumns();

	__fastcall TBaseOrdersForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBaseOrdersForm *BaseOrdersForm;
//---------------------------------------------------------------------------
#endif
