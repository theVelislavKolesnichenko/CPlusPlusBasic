#include <iostream>
#include <windows.h>
using namespace std;

void poBit(int a, int b);

int main()
{
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "�������� a=";
	cin >> a;
	cout << "�������� b=";
	cin >> b;
	poBit(a, b);

	return 0;
}
void poBit(int a, int b) {
	cout << "�������� ��:" << ~a << ", " << ~b << endl;
	cout << "�������� �: " << &a << ", " << &b << endl;
	cout << "�������� ���: " << 'a|b'<< endl;
	cout << "�������� XOR: " << 'a^b' << endl;
	int c = a << 5, d = b << 5;
	cout << "���������� �����: " << c << "," << d << endl;
	int e = a >> 4, f = b >> 4;
	cout << "���������� ������: " << e << ", " << f << endl;
}