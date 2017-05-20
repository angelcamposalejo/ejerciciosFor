#include "stdafx.h"  //________________________________________ ejericiosFor.cpp
#include "ejericiosFor.h"
int contador = 1;
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ejericiosFor app;
	return app.BeginDialog(IDI_ejericiosFor, hInstance);
}

void ejericiosFor::Window_Open(Win::Event& e)
{
	wstring texto;
	Sys::Format(texto, L"Par\r\tImpar\r\n");
	tbxSalida.Text += texto;
	Sys::Format(texto, L"--------------------\r\n");
	tbxSalida.Text += texto;
	for (int i = 1; i <= 12; i++)
	{
		if (i%2 ==0)
		{
			Sys::Format(texto, L"%d\r\n", i);
			tbxSalida.Text += texto;
		}
		else
		{
			Sys::Format(texto, L"%d\r\t", i);
			tbxSalida.Text += texto;
		}
	}
}



