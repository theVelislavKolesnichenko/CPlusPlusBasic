#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
��������� �������� �� ������� �� �������.
��������� ��������� ��� ���������� �� ����� ������� (���, ������, �����, �������).
����������� ����� � 3 �������� �� ���������. ��������� ���� � ����� �� ������� ��:
	1. ��������� �� ������ �� ������������;
	2. ��������� �� ������ ��� �������� ��� �� �������;
	3. ��������� �� ������ ��� ������� ����;
	4. ��������� �� ���-������� �����.
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
