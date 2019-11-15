#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double y, x;
	cout << "y= ";
	cin >> y;

	if (y < 1)
	{
		x = pow(y,3)+(4*y +2*y);
		cout << "x= " << x << endl;
	}
	else if (y > 1)
	{
		x = 2 * (2 * y + 5) / (14 - y / 3);
		cout << "x= " << x << endl;
	}

	return 0;
}