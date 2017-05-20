#include "stdafx.h"  //________________________________________ ejericiosFor.cpp
#include "ejericiosFor.h"
int contador = 1;
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ejericiosFor app;
	return app.BeginDialog(IDI_ejericiosFor, hInstance);
}

void ejericiosFor::Window_Open(Win::Event& e)
{
}

void ejericiosFor::btAgregar_Click(Win::Event& e)
{
	tbxSalida.Text = L"";
	for (int i = 1; i <= contador; i++)
	{
		tbxSalida.Text += std::to_wstring(i);
		tbxSalida.Text += L",";
	}
	contador++;
}

