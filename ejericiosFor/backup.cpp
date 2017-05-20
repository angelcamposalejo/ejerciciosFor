#include "stdafx.h"  //________________________________________ ejericiosFor.cpp
#include "ejericiosFor.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	ejericiosFor app;
	return app.BeginDialog(IDI_ejericiosFor, hInstance);
}

void ejericiosFor::Window_Open(Win::Event& e)
{
}

void ejericiosFor::btAgregar_Click(Win::Event& e)
{
}

