#include <iostream>

using namespace std;

int intInput(char);
void to(int);

int main()
{
	int a;
	a = intInput('a');

	to(a);
	return 0;
}

int intInput(char symb)
{
	cout << symb << "=";
	int a;
	cin >> a;
	return a;
}

void to(int a)
{
	for (int i = 1; i <= a; i++)
	{
		cout << i << " ";
	}
}

//��������� �������� � ������� ����� ������ ���� ��������� ����������� ���� ����� ��������
//�� ������������ � ������� ������� �� 1 �� ���������� �����.