#include <iostream>
using namespace std;

double resPow(double x, double y);

int main()
{
	int y,x;
	cout << "y= ";
	cin >> y;
	x = pow(y, 3) + ((y * 4) + (2 * y));
	x = 2 * (2 * y + 5) / (14 - (y / 3));
	cout << "x= " << resPow(x,y) << endl;
	
	return 0;
}
double resPow(double x, double y) {
	if (y < 1) {
		return x = pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else if (y > 1) {
		return x = 2 * (2 * y + 5) / (14 - y / 3);
	}
	else {
		return 0;
	}
}