#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
Съставете програма за каталог от котенца.
Съставете структура със свойствата на едино котенце (Име, Порода, Тегло, Възраст).
Дефинирайте масив с 3 елемента от структура. Направете меню с избор на функции за:
	1. Въвеждане на масива от клавиятурата;
	2. Сортиране на масива във възходящ ред по теглото;
	3. Записване на масива във двоичен файл;
	4. Извеждане на най-младата котка.
*/

int main()
{
	int op;
	do {
		cout << "1. Enter from command prompt" << endl;
		cout << "2. Sort array" << endl;
		cout << "3. Save in binary file" << endl;
		cout << "4. Search" << endl;
		cout << "0. Exit" << endl;
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
