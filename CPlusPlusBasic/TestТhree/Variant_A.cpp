#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
Съставете програма за каталог от автомобили. 
Съставете структура със свойствата на един автомобил (Марка, Модел, Година на производство, цена). 
Дефинирайте масив с 3 елемента от структура. Направете меню с избор на функции за:
	1. Въвеждане на масива от клавиатурата;
	2. Записване на масива в текстови файл;
	3. Сортиране на автомобилите във възходящ ред по година на производство;
	4. Извеждане на автомобили с цена по малка или равна на въведена от клавиатурата.
*/

int main()
{
	int op;
	do {
		cout << "1. Enter from command prompt" << endl;
		cout << "2. Save in text file" << endl;
		cout << "3. Sort array" << endl;
		cout << "4. Search" << endl;
		cout << "Select option: ";
		cin >> op;

		switch (op)
		{
		case 0:
		{
			cout << "Exit with <y> : ";
			char ch;
			cin >> ch;
			if (ch != 'y' && ch != 'Y')
			{
				op = -1;
			}
		}
		break;
		default:
			cout << "Invalid operatin" << endl;
			system("pause");
			break;
		}

		system("cls");
	} while (op != 0);

	return 0;
}
