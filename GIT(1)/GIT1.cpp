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
	cout << "7.Улюблена тварина : собака \n";
	cout << "8. Улюбленна книга : Тестирование Дет Ком \n";
	cout << "9. Улюблена страва : картошка \n";
	cout << "10. Улюблений автор : Сесілія Аххерн \n";
	cout << "11. Улюблений співак : Поплавський \n";
	cout << "12. Улюблена пісня : Юний орел \n";
	cout << "13. Улюблене число : 13 \n";
	cout << "14. Улюблений предмет : КТвПД \n";
	cout << "15. Улюблений мутфільм : Скубі Дуу \n";
	cout << "16. Улюблена країна  : Англія \n";
	cout << "17. Улюблений фільм : Форсаж  \n";
	cout << "17.1 Бойовик \n";
	cout << "17.2 Фентезі \n";
	cout << " 17.3 Драма \n";
	cout << "17.4 Наукові \n";

	system("pause");
}

