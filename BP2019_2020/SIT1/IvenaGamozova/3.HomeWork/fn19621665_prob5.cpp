#include <iostream>
#include <math.h>
using namespace std;
int bub(int y);
int main()
{
	double y;
	double x;
	cout << "Enter y" << endl;
	cout << "y=";
	cin >> y;
	x = bub(y);

	return 0;
}
int bub(int y)
{
	double x;
	if (y < 1)
	{
		x = (pow(y, 3) + (pow(y,4) + (2*y)));
		cout << x << endl;
		return x;
	}
	else if (y>1)
	{
		x = 2 * (2 * y + 5) / (14 - y / 3);
		cout << x << endl;
		return x;
	}

	return 0;
}