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


	cout << "1. ��i�����: ����������� \n";
	cout << "2. I�'� : ����� \n";
	cout << "3. �� ������� : �������� \n";
	cout << "4. ̳��� ���������� : ³����� \n";
	cout << "5. ̳��� ���������� : ³����� \n";
	cout << "6. ��������� ���� : �������� \n";
	cout << "7.�������� ������� : ������ \n";
	cout << "8. ��������� ����� : ������������ ��� ��� \n";
	cout << "8.1 ���������� \n";
	cout << "8.2 ����� \n";
	cout << "1. �������� \n";
	system("pause");
}

