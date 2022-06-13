//---------------------------------------------------------------------------

#ifndef uAddEditClientH
#define uAddEditClientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "bsSkinBoxCtrls.hpp"
#include "bsSkinCtrls.hpp"
#include "BusinessSkinForm.hpp"
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "Uni.hpp"
#include <Data.DB.hpp>
#include <Vcl.Mask.hpp>
#include "FormSize.hpp"
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
#include "dbimageen.hpp"
#include "ieview.hpp"
#include "imageenview.hpp"
//---------------------------------------------------------------------------
class TAddEditClientForm : public TForm
{
__published:	// IDE-managed Components
	TbsSkinPanel *bsSkinPanel1;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TUniQuery *UniQueryShow;
	TUniQuery *UniQueryEx;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TFormSize *FormSize1;
	TOpenImageEnDialog *OpenImageEnDialog1;
	TImageEnIO *ImageEnIO1;
	TbsSkinPanel *bsSkinPanel2;
	TbsSkinStdLabel *bsSkinStdLabel7;
	TbsSkinStdLabel *bsSkinStdLabel1;
	TbsSkinStdLabel *bsSkinStdLabel2;
	TbsSkinStdLabel *bsSkinStdLabel3;
	TbsSkinStdLabel *bsSkinStdLabel4;
	TbsSkinStdLabel *bsSkinStdLabel5;
	TbsSkinStdLabel *bsSkinStdLabel6;
	TbsSkinStdLabel *bsSkinStdLabel8;
	TbsSkinEdit *bsSkinEdit2;
	TbsSkinEdit *bsSkinEdit1;
	TbsSkinEdit *bsSkinEdit3;
	TbsSkinEdit *bsSkinEdit4;
	TbsSkinEdit *bsSkinEdit6;
	TbsSkinEdit *bsSkinEdit7;
	TbsSkinPanel *bsSkinPanel4;
	TbsSkinSpeedButton *bsSkinSpeedButton3;
	TImageEnView *ImageEnView1;
	TImageEnDBView *ImageEnDBView1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TbsSkinDateEdit *bsSkinDateEdit1;
	TUniDataSource *UniDataSourceShow;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations

void ShowData();
void AddData();
void EditData();

String TYPE;
String MAIN_ID;

String PHOTO_FILENAME;


	__fastcall TAddEditClientForm(TComponent* Owner, String pID);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddEditClientForm *AddEditClientForm;
//---------------------------------------------------------------------------
#endif
