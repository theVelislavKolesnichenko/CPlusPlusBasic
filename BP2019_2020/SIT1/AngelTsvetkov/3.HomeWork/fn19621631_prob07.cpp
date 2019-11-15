#include <iostream>
#include <math.h>
using namespace std;
double reshenie1(double y);
double reshenie2(double y);
int main()
{
	double y;
	cout << "y= ";
	cin >> y;
	double x1 = reshenie1(y);
	double x2 = reshenie2(y);
	if (y<=5)
	{
		cout << "x = " << x1 << endl;
	}
	else
	{
		cout << "x = " << x2 << endl;
	}
	
	return 0;
}
double reshenie1(double y)
{
	double result = pow(y, 3) + (pow(y, 2) + 2 * y);
	return result;
}
double reshenie2(double y)
{
	double result = 2 * (2 * y + 5) / (14 - y / 3);
	return result;
}