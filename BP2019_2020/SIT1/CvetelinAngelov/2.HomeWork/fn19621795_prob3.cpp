#include <iostream>

using namespace std;

float input(char symb);
float average_val(int a, int b, int c, int d);

int main()
{
	cout << " - Homework N2, Ex 3 - \n\n";
	int a, b, c, d;

	a = input('a');
	b = input('b');
	c = input('c');
	d = input('d');

	cout << "Average value: " << average_val(a, b, c, d);
}

float input(char symb)
{
	float val;
	cout << "Please enter a value for " << symb << ":";
	cin >> val;
	return val;
}

float average_val(int a, int b, int c, int d)
{
	return (float)(a + b + c + d) / 4;
}

// ��������� �������� ������� ��
//	- ��������� �� ������ �����.������ ���� ������ ��������� ������� 
//	�� ������������ ����� �� �� �������.����� ���� �������� ���������� �� 
//	���������� �����.
//	- ���������� �� �������� �������� �� ������ �����.
// ��� ������� main �������� ������ ���� �����, �������� �������� �� ��������.