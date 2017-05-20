#include "stdafx.h"  //________________________________________ ejericiosFor.cpp
#include "ejericiosFor.h"
int contador = 1;
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ejericiosFor app;
	return app.BeginDialog(IDI_ejericiosFor, hInstance);
}

void ejericiosFor::Window_Open(Win::Event& e)
{
	for (int i = 2; i <= 12; i++)
	{
		int a = 0;
		for (int j = 1; j <= 100; j++)
		{
			if (i%j == 0)
			{
				a++;
			}
		}
		if (a == 2)
		{
			tbxSalida.Text+= Sys::Convert::ToString(i);
			tbxSalida.Text += L"\n";
		}
	}
}



