#include <iostream>

using namespace std;

void pos_neg(float a);

int main()
{
	float a;

	cout << "Homework - 3 | Exercise - 3\n\n"
		<< "Enter a number=";
	cin >> a;

	pos_neg(a);

	return 0;
}

void pos_neg(float a)
{
	if (a < 0)
	{
		cout << "The entered value is negative.\n";
	}
	else if (a > 0)
	{
		cout << "The entered value is positive.\n";
	}
}
//��������� �������� � ������� �� �������� �� ����������� �����.
//��������� ������ ���� ������ ��������� ������ ����� � ������� �� ������ positive
//��� ������� � ����������� ��� negative ��� � �����������.