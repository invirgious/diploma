//---------------------------------------------------------------------------

#ifndef uAddEditOrderH
#define uAddEditOrderH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "bsSkinBoxCtrls.hpp"
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
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "ieopensavedlg.hpp"
#include "iesettings.hpp"
#include "iexBitmaps.hpp"
#include "iexLayers.hpp"
#include "iexRulers.hpp"
#include "iexToolbars.hpp"
#include "iexUserInteractions.hpp"
#include "imageenio.hpp"
#include "MemDS.hpp"
#include "ToolCtrlsEh.hpp"
#include "Uni.hpp"
#include <Data.DB.hpp>
#include <Vcl.Mask.hpp>
#include "ieview.hpp"
#include "imageenview.hpp"
//---------------------------------------------------------------------------
class TAddEditOrderForm : public TForm
{
__published:	// IDE-managed Components
	TbsSkinPanel *bsSkinPanel1;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TbsSkinPanel *bsSkinPanel2;
	TbsSkinStdLabel *bsSkinStdLabel1;
	TbsSkinStdLabel *bsSkinStdLabel6;
	TbsSkinStdLabel *bsSkinStdLabel11;
	TbsSkinComboBox *bsSkinComboBox1;
	TbsSkinCurrencyEdit *bsSkinCurrencyEdit1;
	TUniQuery *UniQueryShow;
	TUniQuery *UniQueryEx;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TFormSize *FormSize1;
	TbsSkinDateEdit *bsSkinDateEdit1;
	TUniDataSource *UniDataSource_Items;
	TbsSkinGroupBox *bsSkinGroupBox1;
	TDBGridEh *DBGridEh1;
	TbsSkinPanel *bsSkinPanel3;
	TbsSkinSpeedButton *bsSkinSpeedButton4;
	TbsSkinSpeedButton *bsSkinSpeedButton5;
	TUniQuery *UniQuery_Items;
	TStringField *UniQuery_Items_ID;
	TStringField *UniQuery_Items_SELL_ID;
	TStringField *UniQuery_Items_PROD_SERV_ID;
	TIntegerField *UniQuery_Items_COUNT;
	TFloatField *UniQuery_Items_SUM;
	TStringField *UniQuery_Items_TITLE;
	TFloatField *UniQuery_Items_PRICE;
	TStringField *UniQuery_Items_TYPE;
	TUniQuery *UniQueryDEL;
	TFloatField *UniQuery_ItemsSHOW_SUM;
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton5Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton4Click(TObject *Sender);
	void __fastcall UniQuery_ItemsCalcFields(TDataSet *DataSet);
	void __fastcall UniQuery_ItemsAfterOpen(TDataSet *DataSet);
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations

void ShowData();
void AddData();
void EditData();

String TYPE;
String MAIN_ID;

TStringList *client_ids;

void LoadingData();

double CALC_SUM();

	__fastcall TAddEditOrderForm(TComponent* Owner, String pID);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddEditOrderForm *AddEditOrderForm;
//---------------------------------------------------------------------------
#endif
