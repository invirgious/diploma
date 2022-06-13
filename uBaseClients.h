//---------------------------------------------------------------------------

#ifndef uBaseClientsH
#define uBaseClientsH
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
#include "GridsEh.hpp"
#include "MemDS.hpp"
#include "ToolCtrlsEh.hpp"
#include "Uni.hpp"
#include <Data.DB.hpp>
#include "FormSize.hpp"
//---------------------------------------------------------------------------
class TBaseClientsForm : public TForm
{
__published:	// IDE-managed Components
	TDBGridEh *DBGridEh_clients;
	TbsSkinPanel *bsSkinPanel1;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TbsSkinSpeedButton *bsSkinSpeedButton3;
	TbsSkinSpeedButton *bsSkinSpeedButton4;
	TUniTable *UniTable_Clients;
	TUniDataSource *UniDataSource_Clients;
	TUniQuery *UniQueryEx;
	TUniQuery *UniQueryDEL;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TbsSkinSpeedButton *bsSkinSpeedButton5;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TFormSize *FormSize1;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall bsSkinSpeedButton4Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton3Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall DBGridEh_clientsTitleBtnClick(TObject *Sender, int ACol, TColumnEh *Column);
	void __fastcall DBGridEh_clientsDblClick(TObject *Sender);
	void __fastcall bsSkinSpeedButton5Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);


private:	// User declarations
public:		// User declarations


	__fastcall TBaseClientsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBaseClientsForm *BaseClientsForm;
//---------------------------------------------------------------------------
#endif
