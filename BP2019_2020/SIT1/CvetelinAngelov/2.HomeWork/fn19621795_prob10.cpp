#include <iostream>

using namespace std;

struct rectangle
{
	float a, b;
};

float input(char symb);
rectangle rec_input();
float rec_p(rectangle recp);

int main()
{
	rectangle a;
	cout << " - Homework N2, Ex 10 - \n\n";

	a = rec_input();

	cout << "P=" << rec_p(a) << endl;
}

float input(char symb)
{
	float val;
	cout << symb << "=";
	cin >> val;
	return val;
}

rectangle rec_input()
{
	rectangle reci;
	reci.a = input('a');
	reci.b = input('b');
	return reci;
}

float rec_p(rectangle recp)
{
	return (2 * recp.a) + (2 * recp.b);
}

//��������� �������� ���������� ��������� �������� ������������ � ������� :
//	- ��������� �� �����������.��������� �� ������ ���������.����� ���� ��������
//		���������� �� ���� �� �����������.
//	- ��������� ������ �� �������������.������ ���� ��������� ���������� �� ���� ��
//		����������� � ����� ���� �������� ���������� �� ������ ��.
//��� ������� main �� �� ������� ���������� �� ���� �� ����������� � �� �� ������
//������ �� �������������.