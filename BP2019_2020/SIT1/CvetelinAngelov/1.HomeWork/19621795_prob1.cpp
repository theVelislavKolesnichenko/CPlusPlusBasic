#include <iostream>

using namespace std;

void main()
{
	int a, b;
	float c, d;
	cout << " - Homework N1, Ex 1 - \n\n"
		<< "Entering values:\n"
		<< "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	c = a / b; //�� ������������ �� ��������� ��������, ����� � ���� �����
	//���� � ����, ������ ���������� �������� � ����������, ����� ��� � ����������.
	//����� ��������, �� ���� ����������� ��������, ���������� ���� ������ �� � ���� �����.
	d = (float)a / b; //�� ������������ �� ��������� ��������, ����� � ����� � ������� �������.
	//���� � ����, ������ ���������� ������������� �� ���������� �� ���� ���� �� �������������
	//����������, ��������� � ����������.
	cout << "\n\nResults:\n"
		<< "C=" << c << endl
		<< "D=" << d << endl;
	system("pause");
}

//��������� �������� � ����� �� �� �������� ��� ����������� ����� � � B :
//�) �� ���������� � � ������� ������� ��������� ��������� �� ��������� �� � � �.�������� ���������.
//�) �� ���������� D � ������� ������� ��������� ��������� �� ��������� �� � � � ���� ������������ � ��� float.�������� ���������.
//c) ���� �������� � ���������� �������� ����������� �� �) � �).