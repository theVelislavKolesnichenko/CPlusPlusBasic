#include <iostream>
#include <math.h>
using namespace std;
double MAX(double y);
int main()
{
	double y;
	cout << "y= ";
	cin >> y;
	cout << "x= " << MAX(y) << endl;
	return 0;
}

double MAX(double y)
{
	if (y <= -5)
	{
		double x;
		return x = pow(y, 3) + (4 * y + 2 * y);
		return x;
	}
	else if (y > 5)
	{
		double x;
		return x = 2 * (2 * y + 5) / (14 - y / 3);
		return x;
	}
}