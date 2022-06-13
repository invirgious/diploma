//---------------------------------------------------------------------------

#ifndef uAddEditUserH
#define uAddEditUserH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "bsSkinBoxCtrls.hpp"
#include "bsSkinCtrls.hpp"
#include "bsSkinTabs.hpp"
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
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
#include "dbimageen.hpp"
#include "ieview.hpp"
#include "imageenview.hpp"
#include "ieopensavedlg.hpp"
#include "imageenio.hpp"
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "iesettings.hpp"
#include "iexBitmaps.hpp"
#include "iexLayers.hpp"
#include "iexRulers.hpp"
#include "iexToolbars.hpp"
#include "iexUserInteractions.hpp"
#include "FormSize.hpp"
//---------------------------------------------------------------------------
class TAddEditUserForm : public TForm
{
__published:	// IDE-managed Components
	TbsSkinPageControl *bsSkinPageControl1;
	TbsSkinTabSheet *bsSkinTabSheet1;
	TbsSkinStdLabel *bsSkinStdLabel3;
	TbsSkinStdLabel *bsSkinStdLabel4;
	TbsSkinStdLabel *bsSkinStdLabel1;
	TbsSkinStdLabel *bsSkinStdLabel6;
	TbsSkinEdit *bsSkinEdit1;
	TbsSkinDateEdit *bsSkinDateEdit7;
	TbsSkinPanel *bsSkinPanel1;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TUniQuery *UniQueryShow;
	TUniQuery *UniQueryEx;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TbsSkinPanel *bsSkinPanel3;
	TbsSkinPanel *bsSkinPanel4;
	TbsSkinStdLabel *bsSkinStdLabel7;
	TbsSkinEdit *bsSkinEdit2;
	TbsSkinStdLabel *bsSkinStdLabel8;
	TbsSkinEdit *bsSkinEdit3;
	TbsSkinStdLabel *bsSkinStdLabel9;
	TbsSkinStdLabel *bsSkinStdLabel10;
	TImageEnView *ImageEnView1;
	TUniDataSource *UniDataSourceShow;
	TImageEnDBView *ImageEnDBView1;
	TbsSkinSpeedButton *bsSkinSpeedButton3;
	TbsSkinGroupBox *bsSkinGroupBox2;
	TbsSkinCheckBox *bsSkinCheckBox2;
	TbsSkinStdLabel *bsSkinStdLabel19;
	TbsSkinEdit *bsSkinEdit17;
	TbsSkinEdit *bsSkinEdit18;
	TOpenImageEnDialog *OpenImageEnDialog1;
	TImageEnIO *ImageEnIO1;
	TFormSize *FormSize1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TbsSkinEdit *bsSkinEdit13;
	TbsSkinMemo *bsSkinMemo1;
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton3Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations

void ShowData();
void AddData();
void EditData();

String TYPE;
String MAIN_ID;

String PHOTO_FILENAME;


	__fastcall TAddEditUserForm(TComponent* Owner, String pID);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddEditUserForm *AddEditUserForm;
//---------------------------------------------------------------------------
#endif
