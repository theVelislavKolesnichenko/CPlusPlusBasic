#include <iostream>
#include <string>

using namespace std;

int input(string symb);

float speed_calc(int time);
float time_calc(int speed);

const int dist(987);

int main()
{
	cout << " - Homework N2, Ex 8 - \n\n";
	float a, b;
	a = input("time duration");
	cout << "Train speed=" << speed_calc(a) << " km/h" << endl << endl;
	b = input("travel speed");
	cout << "Travel time=" << time_calc(b) << "h" << endl;
}

int input(string symb)
{
	int val;
	cout << "Please enter a value for the " << symb << ":";
	cin >> val;
	return val;
}

float speed_calc(int time)
{
	return dist / time;
}

float time_calc(int speed)
{
	return dist / speed;
}



//���� �� ����� �� ���� � �� ���� �, ����� �� �� ���������� 987 ���������.
//��������� �������� � ������� �� :
//	- ���������� �� ������������ ������� �� �����.��������� ������ ���� ������
//		��������� ������� �� ����� ����� ������ �� ������ ������������ �� ����
//		� �� ���� �.����� ���� �������� ��������� � ����� ������ �� �� ����� �����.
//	- ���������� �� ������� �� ��������.��������� ������ ���� ������ ���������
//		��������� � ����� �� ����� ����� � ����� ���� �������� ������� �� �����
//		�� ������ ������������ �� ���� � �� ���� �.
//��� ������� main �������� ����� �� �������� � ���� ������ � �������� ��������� ��
//����� � �������� ������� � ���� ����� � �������� ������� �� ��������.