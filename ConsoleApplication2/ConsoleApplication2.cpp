// ConsoleApplication2.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace TestWindow;
using namespace WpfApplication1;

	[STAThread]
	int main(array<System::String ^> ^args)
	{
		printf("ASF");

		TestWindow::Form1 ^ form = gcnew TestWindow::Form1();

		Console::WriteLine(form->ToString());

		MainWindow ^ mainWindow = gcnew MainWindow();
		Nullable<bool> res = mainWindow->ShowDialog();


		Console::WriteLine(L"Hello World");
		return 0;
	}
