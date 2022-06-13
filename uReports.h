//---------------------------------------------------------------------------

#ifndef uReportsH
#define uReportsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "bsSkinTabs.hpp"
#include "frxClass.hpp"
#include <Vcl.ComCtrls.hpp>
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "Uni.hpp"
#include <Data.DB.hpp>
#include "bsSkinBoxCtrls.hpp"
#include "bsSkinCtrls.hpp"
#include <Vcl.Mask.hpp>
#include "frxDBSet.hpp"
#include "BusinessSkinForm.hpp"
//---------------------------------------------------------------------------
class TReportsForm : public TForm
{
__published:	// IDE-managed Components
	TfrxReport *frxReport1;
	TfrxReport *frxReport2;
	TbsSkinPageControl *bsSkinPageControl1;
	TbsSkinTabSheet *bsSkinTabSheet1;
	TbsSkinTabSheet *bsSkinTabSheet2;
	TUniQuery *UniQuerySellReport;
	TbsSkinLabel *bsSkinLabel1;
	TbsSkinLabel *bsSkinLabel2;
	TbsSkinDateEdit *bsSkinDateEdit1;
	TbsSkinDateEdit *bsSkinDateEdit2;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TUniQuery *UniQuerySubSellRep;
	TfrxDBDataset *frxDBDatasetSubSellRep;
	TfrxDBDataset *frxDBDatasetSellReport;
	TStringField *UniQuerySubSellRep_ID;
	TStringField *UniQuerySubSellRep_SELL_ID;
	TStringField *UniQuerySubSellRep_PROD_SERV_ID;
	TIntegerField *UniQuerySubSellRep_COUNT;
	TFloatField *UniQuerySubSellRep_SUM;
	TStringField *UniQuerySubSellRep_TITLE;
	TFloatField *UniQuerySubSellRep_PRICE;
	TStringField *UniQuerySubSellRep_TYPE;
	TFloatField *UniQuerySubSellRepSHOW_SUM;
	TbsSkinRadioGroup *bsSkinRadioGroup1;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TUniTable *UniTableClientsRep;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TfrxDBDataset *frxDBDataset1;
	TbsSkinComboBox *bsSkinComboBox1;
	TbsSkinLabel *bsSkinLabel3;
	TUniQuery *UniQueryEx;
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall UniQuerySellReportAfterScroll(TDataSet *DataSet);
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);
	void __fastcall UniQuerySubSellRepCalcFields(TDataSet *DataSet);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TReportsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TReportsForm *ReportsForm;
//---------------------------------------------------------------------------
#endif
