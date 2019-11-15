#include <iostream>
#include <math.h>
using namespace std;

double red (double y);
double blue(double y);
int main() {
	double y;
	cout << "Vuvedete y = ";
	cin >> y;

	if (y >= 58 && y <= 87) {
		cout << "X = " << red(y);
	}
	else if (y > 15 && y < 58) {
		cout << "x = " << blue(y);
	}
	return 0;
}
double red(double y) {
	return (pow(y, 3) + (pow(y, 4) + 2 * y));
}
double blue(double y) {
	return 2*(2*y + 5) / (14 - y / 3);
}