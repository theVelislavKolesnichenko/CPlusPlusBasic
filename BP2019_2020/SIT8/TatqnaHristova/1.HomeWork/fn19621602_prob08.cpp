#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double a, c, y, x;
	cout << "�������� �������� �� �= ";
	cin >> a;
	cout << "�������� �������� �� c= ";
	cin >> c;
	y = a * c;
	x = ((2 * y) + 5) / (14 - (y / 3));
	cout << "���������:  " << x << endl;


	return 0;

}