#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	float a, b, S, P;
	cout << "�������� ������ �= ";
	cin >> a;
	cout << "�������� ������ b=";
	cin >>b;
	S = a * b;
	P = 2 * (a + b);
	cout << "������ �� ������������ e: S= " << S << endl << "���������� �� �: P= " << P << endl;


	return 0;
}