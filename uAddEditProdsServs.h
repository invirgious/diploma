//---------------------------------------------------------------------------

#ifndef uAddEditProdsServsH
#define uAddEditProdsServsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "bsSkinBoxCtrls.hpp"
#include "bsSkinCtrls.hpp"
#include "BusinessSkinForm.hpp"
#include "DBAccess.hpp"
#include "dbimageen.hpp"
#include "FormSize.hpp"
#include "hyiedefs.hpp"
#include "hyieutils.hpp"
#include "ieopensavedlg.hpp"
#include "iesettings.hpp"
#include "ieview.hpp"
#include "iexBitmaps.hpp"
#include "iexLayers.hpp"
#include "iexRulers.hpp"
#include "iexToolbars.hpp"
#include "iexUserInteractions.hpp"
#include "imageenio.hpp"
#include "imageenview.hpp"
#include "MemDS.hpp"
#include "Uni.hpp"
#include <Data.DB.hpp>
#include <Vcl.Mask.hpp>
#include "clFtp.hpp"
#include "clTcpClient.hpp"
#include "clTcpClientTls.hpp"
#include "clTcpCommandClient.hpp"
//---------------------------------------------------------------------------
class TAddEditProductsForm : public TForm
{
__published:	// IDE-managed Components
	TbsSkinPanel *bsSkinPanel1;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TbsSkinPanel *bsSkinPanel2;
	TbsSkinStdLabel *bsSkinStdLabel1;
	TbsSkinStdLabel *bsSkinStdLabel2;
	TbsSkinStdLabel *bsSkinStdLabel3;
	TbsSkinStdLabel *bsSkinStdLabel6;
	TbsSkinEdit *bsSkinEdit1;
	TbsSkinEdit *bsSkinEdit3;
	TbsSkinPanel *bsSkinPanel4;
	TImageEnView *ImageEnView1;
	TUniQuery *UniQueryShow;
	TUniQuery *UniQueryEx;
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TFormSize *FormSize1;
	TOpenImageEnDialog *OpenImageEnDialog1;
	TImageEnIO *ImageEnIO1;
	TUniDataSource *UniDataSourceShow;
	TbsSkinPanel *bsSkinPanel3;
	TbsSkinSpeedButton *bsSkinSpeedButton3;
	TbsSkinComboBox *bsSkinComboBox1;
	TbsSkinCurrencyEdit *bsSkinCurrencyEdit1;
	TbsSkinStdLabel *bsSkinStdLabel11;
	TbsSkinMemo *bsSkinMemo1;
	TImageEnIO *ImageEnIO_Convert;
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

void LoadingData();

void UPLOAD_PHOTOS();

String PHOTO_FILENAME;

void ConvertImage(String in, String out);

bool Wait(int _time);

	__fastcall TAddEditProductsForm(TComponent* Owner, String pID);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddEditProductsForm *AddEditProductsForm;
//---------------------------------------------------------------------------
#endif
