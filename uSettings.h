//---------------------------------------------------------------------------

#ifndef uSettingsH
#define uSettingsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "BusinessSkinForm.hpp"
#include "bsSkinBoxCtrls.hpp"
#include "bsSkinCtrls.hpp"
#include "bsSkinShellCtrls.hpp"
#include <Vcl.Mask.hpp>
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "Uni.hpp"
#include <Data.DB.hpp>
#include <Vcl.Dialogs.hpp>
#include "FormSize.hpp"
//---------------------------------------------------------------------------
class TSettingsForm : public TForm
{
__published:	// IDE-managed Components
	TbsBusinessSkinForm *bsBusinessSkinForm1;
	TbsSkinSpeedButton *bsSkinSpeedButton1;
	TbsSkinSpeedButton *bsSkinSpeedButton2;
	TUniQuery *UniQueryEx;
	TFormSize *FormSize1;
	TbsSkinGroupBox *bsSkinGroupBox1;
	TbsSkinSpeedButton *bsSkinSpeedButton3;
	TbsSkinLabel *bsSkinLabel1;
	TbsSkinLabel *bsSkinLabel2;
	TbsSkinLabel *bsSkinLabel3;
	TbsSkinLabel *bsSkinLabel4;
	TbsSkinEdit *bsSkinEdit1;
	TbsSkinEdit *bsSkinEdit2;
	TbsSkinEdit *bsSkinEdit3;
	TbsSkinEdit *bsSkinEdit4;
	void __fastcall bsSkinSpeedButton2Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton1Click(TObject *Sender);
	void __fastcall bsSkinSpeedButton3Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSettingsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSettingsForm *SettingsForm;
//---------------------------------------------------------------------------
#endif
