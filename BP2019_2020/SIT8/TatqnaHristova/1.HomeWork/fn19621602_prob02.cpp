#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a, b, c, z;
	cout << "�������� �= ";
	cin >> a;
	cout << "�������� b= ";
	cin >> b;
	cout << "�������� c= ";
	cin >> c;
	z = (a + b + c) / 3;
	cout << "�������� �������� �� ����� ����� � " << z << endl;


	return 0;
}