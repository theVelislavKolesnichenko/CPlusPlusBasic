#include <iostream>
#include <math.h>
using namespace std;
double X(double y);
int main()
{
	double y;
	cout << "y= ";
	cin >> y;
	cout << "x= " << X(y) << endl;
	return 0;
}

double X(double y)
{
	if (y < 1)
	{
		double x;
		return x = pow(y, 3) + (pow(y, 4) + 2 * y);
		return x;
	}
	else if (y > 1)
	{
		double x;
		return x = 2 * (2 * y + 5) / (14 - y / 3);
		return x;
	}
}