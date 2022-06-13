//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "uSettings.h"
#include "uMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "BusinessSkinForm"
#pragma link "bsSkinBoxCtrls"
#pragma link "bsSkinCtrls"
#pragma link "bsSkinShellCtrls"
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "Uni"
#pragma link "FormSize"
#pragma resource "*.dfm"
TSettingsForm *SettingsForm;
//---------------------------------------------------------------------------
__fastcall TSettingsForm::TSettingsForm(TComponent* Owner)
	: TForm(Owner)
{


}
//---------------------------------------------------------------------------
void __fastcall TSettingsForm::bsSkinSpeedButton2Click(TObject *Sender)
{
this->ModalResult=mrCancel;
CloseModal();
}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::bsSkinSpeedButton1Click(TObject *Sender)
{

MainForm->Ini->WriteString("OPTIONS", "IP", bsSkinEdit1->Text);
MainForm->Ini->WriteString("OPTIONS", "DB", bsSkinEdit2->Text);
MainForm->Ini->WriteString("OPTIONS", "USER", bsSkinEdit3->Text);
MainForm->Ini->WriteString("OPTIONS", "PASS", bsSkinEdit4->Text);

this->ModalResult=mrOk;
CloseModal();

}
//---------------------------------------------------------------------------


void __fastcall TSettingsForm::bsSkinSpeedButton3Click(TObject *Sender)
{
MainForm->UniConnectionMain->Username=bsSkinEdit3->Text;
MainForm->UniConnectionMain->Password=bsSkinEdit4->Text;
MainForm->UniConnectionMain->Server=bsSkinEdit1->Text;
MainForm->UniConnectionMain->Database=bsSkinEdit2->Text;

MainForm->UniConnectionMain->Connect();

ShowMessage(L"Соединение успешно. Сохраните настройки.");
}
//---------------------------------------------------------------------------

void __fastcall TSettingsForm::FormShow(TObject *Sender)
{
bsSkinEdit1->Text=MainForm->Ini->ReadString("OPTIONS", "IP", "127.0.0.1");
bsSkinEdit2->Text=MainForm->Ini->ReadString("OPTIONS", "DB", "sport_club_db");
bsSkinEdit3->Text=MainForm->Ini->ReadString("OPTIONS", "USER", "root");
bsSkinEdit4->Text=MainForm->Ini->ReadString("OPTIONS", "PASS", "root");
}
//---------------------------------------------------------------------------

