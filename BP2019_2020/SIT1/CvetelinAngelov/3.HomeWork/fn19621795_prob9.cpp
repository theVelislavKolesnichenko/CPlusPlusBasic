#include <iostream>
#include <string>

using namespace std;

string child(int a);

int main()
{
	int a;
	cout << "Homework - 3 | Exercise - 9\n\n"
		<< "Age=";
	cin >> a;
	cout << "The age in in the period of " << child(a) << endl;
	return 0;
}

string child(int a)
{
	string b = "Not in the period.";
	if (a > 0 && a < 1)
	{
		b = "Baby";
	}
	else if (a >= 1 && a < 3)
	{
		b = "Toddler";
	}
	else if (a >= 3 && a < 5)
	{
		b = "Preschool";
	}
	else if (a >= 5 && a < 12)
	{
		b = "Gradeschooler";
	}
	else if (a >= 13 && a < 18)
	{
		b = "Teen";
	}
	else if (a >= 18 && a < 21)
	{
		b = "Young Adult";
	}
	return b;
}

//��������� �������� � ������� �� ��������� �� ��������� ������.��������� ������
//���� ������ ��������� ���� ����� �������� �� ���� :
//
//��� �������� � � ���������(0; 1) � ��������� �� �� ������ Baby
//��� �������� � � ���������[1; 3) � ��������� �� �� ������ Toddler
//��� �������� � � ���������[3; 5) � ��������� �� �� ������ Preschool
//��� �������� � � ���������[5; 12] � ��������� �� �� ������ Gradeschooler
//��� �������� � � ���������[13; 18) � ��������� �� �� ������ Teen
//��� �������� � � ���������[18; 21) � ��������� �� �� ������ Young Adult

