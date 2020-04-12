#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
Съставете програма за каталог от персонажи в компютърна игра.
Съставете структура със свойствата на един персонаж (Име, Сила, Живот, Умение).
Дефинирайте масив с 3 елемента от структура. Направете меню с избор на функции за:
	1. Прочитане на масива от текстови файл (Variant_B);
	2. Извеждане на масива в конзолата;
	3. Сортиране на масива в низходящ ред по сила;
	4. Извеждане на персонажа с най-голям живот.
*/

int main()
{
	int op;
	do {
		cout << "1. Read from text file" << endl;
		cout << "2. Print Books" << endl;
		cout << "3. Sort array" << endl;
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
