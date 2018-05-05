// GIT1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <locale>;
#include "windows.h";

using namespace std;


void main(void)

{
	//setlocale(LC_CTYPE, "UKR");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	cout << "1. Прiзвище: Коцюбинська \n";
	cout << "2. Iм'я : Ольга \n";
	cout << "3. По батькові : Вадимівна \n";
	cout << "4. Місце народження : Вінниця \n";
	cout << "5. Місце проживання : Вінниця \n";
	cout << "6. Улюблений колір : червоний \n";
	
	

	system("pause");
}

