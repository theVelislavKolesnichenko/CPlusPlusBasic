#include <iostream>
#include <math.h>
using namespace std;
double Calculation(double y);
double Calculation2(double y);
int main()
{
	double y;
	cout << "Enter y = ";
	cin >> y;
	if (y >= 58 && y <= 87)
	{
		cout << "x = " << Calculation(y);
	}
	if (y > 15 && y < 58)
	{
		cout << "x = " << Calculation2(y);
	}
}
double Calculation(double y)
{
	return pow(y, 3) + (pow(y, 4) + 2 * y);
}
double Calculation2(double y)
{
	return 2 * (2 * y + 5) / (14 - y / 3);
}
