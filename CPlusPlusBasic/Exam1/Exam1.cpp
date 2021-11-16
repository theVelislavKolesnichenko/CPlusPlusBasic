#include <iostream>
#include "Tests.h"
using namespace std;

/*
* ��������� �������� � ���������� �� ����� �� ��������, ���������, ��������� � ������� �� ��� ������ �����
*/

void sum(double number1, double number2);
void sub(double number1, double number2);
void mul(double number1, double number2);
void div(double number1, double number2);

int main()
{
	setlocale(LC_ALL, "");

	double number1 = 5, number2 = 5;
	char operation;

	do
	{
		system("cls");
		cout << "����:" << endl
			<< "1. �� �������� �������� (+)" << endl
			<< "2. �� ��������� �������� (-)" << endl
			<< "3. �� ��������� �������� (*)" << endl
			<< "4. �� ������� �������� (/)" << endl
			<< "5. �� ����� �������� (n,N)" << endl
			<< "�������� ��������: ";
		cin >> operation;

		switch (operation)
		{
		case '+':
			system("cls");
			sum(number1, number2);
			system("pause");
			break;
		case '-':
			system("cls");
			sub(number1, number2);
			system("pause");
			break;
		case '*':
			system("cls");
			mul(number1, number2);
			system("pause");
			break;
		case '/':
			system("cls");
			div(number1, number2);
			system("pause");
			break;
		default:
			cout << "�������� � ��������� ��������: " << operation << endl;
			break;
		}
	} while (operation != 'n' && operation != 'N');

}

void div(double number1, double number2)
{
	cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
}

void mul(double number1, double number2)
{
	cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
}

void sub(double number1, double number2)
{
	cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
}

void sum(double number1, double number2)
{
	cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
}

