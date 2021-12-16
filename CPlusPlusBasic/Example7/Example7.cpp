#include <iostream>
#include <string>
using namespace std;

struct Kid {
	string name;
	int month;
};

#define MAX_KID 30

void addKid(Kid kids[], int& count);
void addKids(Kid kids[], int& count);
void searchKidsByMonth(Kid kids[], int count);
short enterMonth(string message);
void printKidsMaxMonth(Kid kids[], int count);
void printKidsMinMonth(Kid kids[], int count);
void printKidsByMonth(Kid kids[], int count, short month);

int main()
{
	setlocale(LC_ALL, "");
	Kid kids[MAX_KID];
	int kidsCount = 0;
	int op;

	do
	{
		system("cls");
		cout << "1.�������� �� ���� ������������ ����;\n"
			<< "2.�������� �� ����� �� ���������� ����, ��� ������ �� �������� �� ������������ ����� �� ���� �� ������, ����� ������ ���������������� �������.\n"
			<< "3.��������� �� ������ ����,������ ���� ������� �� ������������ ����� [1-12];\n"
			<< "4.��������� �� ������� �� ���-������� ���� � ������� (������ � ���-����� ����� ������ ������ ��������).\n"
			<< "5.��������� �� ������� �� ���-�������� ���� � ������� (������ � ���-����� ����� ������ ������ ��������).\n"
			<< "0. ������\n"
			<< "������ �� 0 �� 5: ";
		cin >> op;
		switch (op) 
		{
			case 0:break;
			case 1:
			{
				cin.ignore();
				addKid(kids, kidsCount);
			}
			break;
			case 2:
			{
				addKids(kids, kidsCount);
			}
			break;
			case 3:
			{
				searchKidsByMonth(kids, kidsCount);
				system("pause");
			}
			break;
			case 4:
			{
				printKidsMaxMonth(kids, kidsCount);
				system("pause");
			}
			break;
			case 5:
			{
				printKidsMinMonth(kids, kidsCount);
				system("pause");
			}
			break;
		}
	} while (op != 0);
}

void printKidsMaxMonth(Kid kids[], int count) 
{
	int month = 1;
	for (int i = 0; i < count; i++)
	{
		if (month < kids[i].month)
		{
			month = kids[i].month;
		}
	}

	printKidsByMonth(kids, count, month);
}

void printKidsMinMonth(Kid kids[], int count) 
{
	int month = 12;
	for (int i = 0; i < count; i++)
	{
		if (month > kids[i].month)
		{
			month = kids[i].month;
		}
	}

	printKidsByMonth(kids, count, month);
}

short enterMonth(string message)
{
	unsigned short month = 0;

	do
	{
		cout << message << " [1-12]: ";
		cin >> month;
	} while (month < 1 || month > 12);

	return month;
}

void printKidsByMonth(Kid kids[], int count, short month)
{
	bool notExist = true;
	for (int i = 0; i < count; i++)
	{
		if (kids[i].month == month)
		{
			cout << kids[i].name
				<< "� ����� ���� "
				<< month
				<< " �����" << endl;
			notExist = false;
		}
	}

	if (notExist)
	{
		cout << "���� ���� ������ ���� " << month << " �����\n";
	}
}

void searchKidsByMonth(Kid kids[], int count) 
{
	unsigned short month = enterMonth("�������� ����� �� �������");

	printKidsByMonth(kids, count, month);
}

void addKid(Kid kids[], int& count) 
{
	if (count < MAX_KID) 
	{
		cout << "�������� ��� �� ����: ";
		getline(cin, kids[count].name);
		kids[count].month = enterMonth("�������� ����� �� �������");
		count++;
	}
	else
	{
		cout << "� ���� ����� ���� �����" << endl;
	}
}
// count = 5
void addKids(Kid kids[], int& count) 
{
	unsigned short number;
	do
	{	// 1 �� 25
		//5
		cout << "�������� ���� ���� �� ��������� �� 1 �� " 
			<< MAX_KID - count <<": ";
		cin >> number;
	} while (number > MAX_KID - count);
	// 5 - 10
	int newCount = number + count;
	//5 < 10
	while (count < newCount)
	{
		cin.ignore();
		addKid(kids, count);
	}

}