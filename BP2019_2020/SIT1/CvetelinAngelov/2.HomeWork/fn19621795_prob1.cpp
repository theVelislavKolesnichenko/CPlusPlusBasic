#include <iostream>
#include<conio.h>

using namespace std;

void start();
void final();

int main()
{
	cout << " - Homework N2, Ex 1 - \n\n";
	start();
	_getch();
	final();

	system("pause");
}

void start()
{
	cout << "Start ?\n";
}

void final()
{
	printf("Final !\n");
}

//��������� �������� � ������� �� :
//	- ��������� �� ��������� �Start ? �.��������� �� ������ ��������� � �� ����� ��������.
//	- ��������� �� ��������� �Final !�.��������� �� ������ �������� � �� ����� ��������.
//��� ������� main �� ������� ����������� �� ����� � �� ������� ��������� �� ����� �� 
//������������, ���� ����� �� ������� �����.