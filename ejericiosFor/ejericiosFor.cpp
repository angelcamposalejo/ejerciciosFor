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
	for (int i = 1; i <= 12; i++)
	{
		if (i%2 ==0)
		{
			
		}
		else
		{
			Sys::Format(texto, L"El cuadrado de %d es: %d\r\n", i, i*i);
			//tbxSalida.Text+= Sys::Convert::ToString(i);
			tbxSalida.Text += texto;
		}
	}
}



