#include <iostream>

using namespace std;

struct triangle
{
	float a, b, c;
};

triangle triangl_input();
float input(char symb);
float p_calc(triangle val);

int main()
{
	triangle a;
	cout << " - Homework N2, Ex 9 - \n\n";
	a = triangl_input();

	cout << "\nP=" << p_calc(a);
}

float input(char symb)
{
	float val;
	cout << symb << "=";
	cin >> val;
	return val;
}

triangle triangl_input()
{
	triangle a;
	a.a = input('a');
	a.b = input('b');
	a.c = input('c');
	return a;
}

float p_calc(triangle val)
{
	return val.a + val.b + val.c;
}

//��������� �������� ���������� ��������� �������� ����������� � ������� �� :
//	- ��������� �� �����������.��������� �� ������ ���������.����� ���� ��������
//		���������� �� ���� �� �����������.
//	- ��������� ���������� �� �����������.������ ���� ��������� ���������� �� ����
//		�� ����������� � ����� ���� �������� ���������� �� ���������� ��.
//��� ������� main �� �� ������� ���������� �� ���� �� ����������� � �� �� ������
//���������� �� �����������.