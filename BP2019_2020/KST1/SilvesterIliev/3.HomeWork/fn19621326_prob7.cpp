#include <iostream>
#include <math.h>
using namespace std;

double funct1(double y);

int main()
{
	double y;
	cout << "Въведи стойност за y ";
	cin >> y;
	funct1(y);
	return 0;
}

double funct1(double y)
{
	if (y <= -5)
	{
		double x = pow(y, 3) + (pow(y, 4) + 2 * y);
		cout << "x =" << x;
		return x;
	}
	else if (y > 5)
	{
		double x = 2 * (2 * y + 5) / (14 - y / 3);
		cout << endl << "x=" << x;
		return x;
	}
	else
	{
		cout << "Out of range";
		return 0;
	}
}