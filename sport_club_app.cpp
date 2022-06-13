//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("uBaseUsers.cpp", BaseUsersForm);
USEFORM("uBaseProdsServs.cpp", BaseProdsServsForm);
USEFORM("uBaseOrders.cpp", BaseOrdersForm);
USEFORM("uSettings.cpp", SettingsForm);
USEFORM("uReports.cpp", ReportsForm);
USEFORM("uMain.cpp", MainForm);
USEFORM("uAddEditClient.cpp", AddEditClientForm);
USEFORM("uAddEditOrder.cpp", AddEditOrderForm);
USEFORM("uBaseClients.cpp", BaseClientsForm);
USEFORM("uAddEditUser.cpp", AddEditUserForm);
USEFORM("uAddEditProdsServs.cpp", AddEditProductsForm);
USEFORM("uAddToOrder.cpp", AddToOrderForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = false;
		Application->CreateForm(__classid(TMainForm), &MainForm);
		Application->CreateForm(__classid(TBaseUsersForm), &BaseUsersForm);
		Application->CreateForm(__classid(TBaseProdsServsForm), &BaseProdsServsForm);
		Application->CreateForm(__classid(TBaseOrdersForm), &BaseOrdersForm);
		Application->CreateForm(__classid(TBaseClientsForm), &BaseClientsForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
