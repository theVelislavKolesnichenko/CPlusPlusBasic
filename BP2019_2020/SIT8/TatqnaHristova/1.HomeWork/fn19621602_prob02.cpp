#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a, b, c, z;
	cout << "Въведете а= ";
	cin >> a;
	cout << "Въведете b= ";
	cin >> b;
	cout << "Въведете c= ";
	cin >> c;
	z = (a + b + c) / 3;
	cout << "Средната стойност на трите числа е " << z << endl;


	return 0;
}