//---------------------------------------------------------------------------

#ifndef uMainH
#define uMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DBAccess.hpp"
#include "MySQLUniProvider.hpp"
#include "Uni.hpp"
#include "UniProvider.hpp"
#include <Data.DB.hpp>
#include "bsSkinCtrls.hpp"
#include "DBAxisGridsEh.hpp"
#include "DBGridEh.hpp"
#include "DBGridEhGrouping.hpp"
#include "DBGridEhToolCtrls.hpp"
#include "DynVarsEh.hpp"
#include "EhLibVCL.hpp"
#include "GridsEh.hpp"
#include "MemDS.hpp"
#include "ToolCtrlsEh.hpp"
#include "bsSkinData.hpp"
#include "BusinessSkinForm.hpp"
#include "bsSkinBoxCtrls.hpp"
#include <Vcl.Mask.hpp>
#include "bsSkinTabs.hpp"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include "bsSkinMenus.hpp"
#include <Vcl.Menus.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include "bsPngImageList.hpp"
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include "bsSkinExCtrls.hpp"
#include "acPNG.hpp"
//---------------------------------------------------------------------------

#include <vector>

#include "uBaseUsers.h"
#include "uBaseClients.h"
#include "uBaseProdsServs.h"
#include "uBaseOrders.h"

#include "bsSkinTabs.hpp"

#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------

String IDGen(String prefix);
UnicodeString ChangeAllSubStr(UnicodeString Str,UnicodeString Sub,UnicodeString Z);

String GET_VALUE(TbsSkinComboBox *ComboBox);
void SET_VALUE(TbsSkinComboBox *ComboBox, String Value);

void SET_PARAM_VALUE(TUniParam *Param, TbsSkinDateEdit* DateEdit);
void SET_FIELD_VALUE(TField *Field, TbsSkinDateEdit* DateEdit);

//---------------------------------------------------------------------------
void GRID_EXPORT_XLS(TDBGridEh *_grid);

//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TUniConnection *UniConnectionMain;
	TUniTransaction *UniTransactionMain;
	TMySQLUniProvider *MySQLUniProvider;
	TbsSkinPanel *MainButtonsPanel;
	TbsSkinData *bsSkinDataMain;
	TbsCompressedSkinList *bsCompressedSkinListMain;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TUniQuery *UniQueryEx;
	TUniQuery *UniQueryDEL;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TbsSkinSpeedButton *bsSkinSpeedButton3;
	TActionList *ActionListMain;
	TAction *Action1;
	TbsSkinSpeedButton *bsSkinSpeedButton7;
	TbsPngImageList *bsPngImageList_20x20;
	TUniQuery *UniQueryEx_Filters;
	TbsPngImageList *bsPngImageList_30x30;
	TImage *Image_filter_icon;
	TUniQuery *UniQuery_getappnum;
	TbsSkinPanel *LOGIN_PANEL;
	TbsSkinStdLabel *bsSkinStdLabel1;
	TbsSkinStdLabel *bsSkinStdLabel2;
	TbsSkinSpeedButton *bsSkinSpeedButton4;
	TbsSkinSpeedButton *bsSkinSpeedButton5;
	TImage *Image1;
	TbsSkinStdLabel *bsSkinStdLabel3;
	TbsSkinPasswordEdit *bsSkinPasswordEdit1;
	TbsSkinComboBox *bsSkinComboBox1;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TbsSkinSpeedButton *bsSkinSpeedButton6;
	TbsSkinSpeedButton *bsSkinSpeedButton8;
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton3Click(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall bsSkinSpeedButton4Click(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall bsSkinSpeedButton5Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall bsSkinSpeedButton7Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton6Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations

TStringList *login_ids;

bool IS_ADMIN;
String ACTIVE_USER_NAME;
String ACTIVE_USER_ID;

void LOGIN_LOAD();
void LOGIN_EXECUTE();

TIniFile *Ini;


	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
