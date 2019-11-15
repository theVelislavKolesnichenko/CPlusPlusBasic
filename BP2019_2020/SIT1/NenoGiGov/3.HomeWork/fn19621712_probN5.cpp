#include <iostream>
#include <math.h>
using namespace std;

double f(double y);
double f2(double y);

int main()
{
	double y;
	cout << "y=";
	cin >> y;
	cout << "x = y^3+(y^4 + 2y) = " << f(y) << endl;
	cout << "x = 2(2y + 5)/(14 - y/3) = " << f2(y) << endl;

	return 0;
}
double f(double y)
{
	if (y < 1)
	{
		return pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else
	{
		cout <<"ne e v intervala" << endl;
		return 0;
	}
}
double f2(double y)
{
	if (y > 1)
	{
		return 2 * (2 * y + 5) / (14 - y / 3);
	}
	else
	{
		cout << "ne e v intervala" << endl;
		return 0;
	}
}
