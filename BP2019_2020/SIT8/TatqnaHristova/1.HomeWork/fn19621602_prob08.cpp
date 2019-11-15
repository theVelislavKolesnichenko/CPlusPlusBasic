#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double a, c, y, x;
	cout << "Въведете стойност на а= ";
	cin >> a;
	cout << "Въведете стойност на c= ";
	cin >> c;
	y = a * c;
	x = ((2 * y) + 5) / (14 - (y / 3));
	cout << "Резулатат:  " << x << endl;


	return 0;

}