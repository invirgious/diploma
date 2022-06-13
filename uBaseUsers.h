//---------------------------------------------------------------------------

#ifndef uBaseUsersH
#define uBaseUsersH
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
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TBaseUsersForm : public TForm
{
__published:	// IDE-managed Components
	TDBGridEh *DBGridEh_users;
	TbsSkinPanel *bsSkinPanel1;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TbsSkinSpeedButton *bsSkinSpeedButton3;
	TbsSkinSpeedButton *bsSkinSpeedButton4;
	TUniDataSource *UniDataSource_Users;
	TUniQuery *UniQueryEx;
	TUniQuery *UniQueryDEL;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TUniQuery *UniTable_Users;
	TbsSkinSpeedButton *bsSkinSpeedButton5;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TFormSize *FormSize1;
	TStringField *UniTable_Users_ID;
	TStringField *UniTable_Users_TAB_NUM;
	TStringField *UniTable_Users_LAST_NAME;
	TStringField *UniTable_Users_NAME;
	TStringField *UniTable_Users_MIDDLE_NAME;
	TDateField *UniTable_Users_BIRTHDAY;
	TStringField *UniTable_Users_POST;
	void __fastcall bsSkinSpeedButton4Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton3Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall DBGridEh_usersTitleBtnClick(TObject *Sender, int ACol, TColumnEh *Column);
	void __fastcall bsSkinSpeedButton5Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations

	__fastcall TBaseUsersForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBaseUsersForm *BaseUsersForm;
//---------------------------------------------------------------------------
#endif
