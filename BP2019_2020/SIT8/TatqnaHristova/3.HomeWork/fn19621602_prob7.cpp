#include <iostream>
using namespace std;

double powSeven(double x, double y);

int main()
{
	int y, x;
	cout << "y= ";
	cin >> y;
	x = pow(y, 3) + (pow(y, 4) + (2 * y));
	x = 2 * (2 * y + 5) / (14 - (y / 3));
	cout << "x= " << powSeven(x, y) << endl;

	return 0;
}
double powSeven(double x, double y) {
	if (y <=-5) {
		return x = pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else if (y > 5) {
		return x = 2 * (2 * y + 5) / (14 - y / 3);
	}
	else {
		cout << "Error" << endl;
		return 0;
	}
}