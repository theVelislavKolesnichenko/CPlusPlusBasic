#include <iostream>
using namespace std;

int main() {
	double a; //���������� '�' ��� ������� ��������. ������� � �� ��� "double", ������ ���� �� �� ������ ����� � ������� �������.
	double b; //���������� 'b' ��� ������� ��������. ������� � �� ��� "double", ������ ���� �� �� ������ ����� � ������� �������.
	double c; //���������� 'c' ��� ������� ��������. ������� � �� ��� "double", ������ ���� �� �� ������ ����� � ������� �������.
	double d; //���������� 'd' ��� ������� ��������. ������� � �� ��� "double", ������ ���� �� �� �������� ����� � ������� �������.

	cout << "a= "; // �� ��������� �� ������� ������� "a=", ���� ��������� �� ����������� �� ������ �������� �� '�'
	cin >> a; // ��� �� ������� � ��������� ���������� �� '�'
	cout << "b= "; // �� ��������� �� ������� ������� "b=", ���� ��������� �� ����������� �� ������ �������� �� 'b'
	cin >> b; // ��� �� ������� � ��������� ���������� �� 'b'
	cout << "c= "; // �� ��������� �� ������� ������� "c=", ���� ��������� �� ����������� �� ������ �������� �� 'c'
	cin >> c; // ��� �� ������� � ��������� ���������� �� 'c'

	d = double((a + b + c) / 3); //�������� �� ������ ����������� ����� ����������� �� ������������ '�','b' � '�'. (��� "double", ������ ���� �� �� ������ ����� � ������� �������) ���� ���� ���������� �� ��������� �� ������������ 'd'.
	cout << "d=" << d << endl; //������� �� �� ��������� ������� "d=" � ���� ���� �� ������� ������ �������� �� ������������ 'd'
	return 0; //���������� � ��������� � ����� ��������
}