#include <iostream>

using namespace std;

float input(char symb);
float x_calc(float a);

int main()
{
	cout << " - Homework N2, Ex 7 - \n\n";
	float y, z;
	y = input('y');
	z = input('z'); // �� ������� � Main ������ �� �� ������� 2 ����������.
	// �� ����� �� � �������?
	cout << "X=" << x_calc(y) << endl;
}

float input(char symb)
{
	float val;
	cout << "Please insert a value for the " << symb << ":";
	cin >> val;
	return val;
}

float x_calc(float y)
{
	int res = 2 * (2 * y + 5) / (14 - y / 3);
	// ???
	// res = 2 * (2 * y + 5) / (14 - y) / 3;
	return res;
}

//��������� �������� � ������� �� :
//	- ��������� �� ������ �����.������ ���� ������ ��������� ������� �� ������������
//		����� �� �� �������.����� ���� �������� ���������� �� ���������� �����.
//	- ���������� �� x = 2(2y + 5) / (14 � y / 3. ������ ���� ������ ���������
//		������������ � � ����� ���� �������� �������� �� �����������.
//��� ������� main �������� ��� ���������� � �������� ��������� �� ������������ ��
//���������.