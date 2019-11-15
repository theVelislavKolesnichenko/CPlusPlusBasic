#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int y;
	cout << "Въведете число: " << endl;
	cin >> y;
	double x;
	double f = -INFINITY;
	double i = +INFINITY;
	if (y > f && y <= -5)
	{
		x = y ^ 3 + (y ^ 2 + 2 * y);
		cout << "x= " << x;
	}
	else if (y > 5 && y < i)
	{
		x = 2 * (2 * y + 5) / (14 - y / 3);
		cout << "x= " << x;
	}
	return 0;
}