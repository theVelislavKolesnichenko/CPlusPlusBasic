#include <iostream>
using namespace std;

void calc(int y);

int main()
{
	float y;
	cout << "Homework - 3 | Exercise - 4\n\n"
		<< "y=";
	cin >> y;

	calc(y);

	return 0;
}

void calc(int y)
{
	if (y == 0)
	{
		cout << "The number can not be devided by 0\n";
	}
	else {
		cout << "x=" << 20 / y << endl;
	}
}

//��������� �������� � ������� �� ���������� �� ��������� �� �����������
//x = 20 / y.��� ������� main �� �������� ���������� ������ ����� ��� �������
//� ����� �� 0 �� �� ������ ���������, �� �� ���� �� �� ���� �� 0, � �������� ������
//�� �� ������ ��������� �� �����������.