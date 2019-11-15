#include <iostream>
#include <math.h>
using namespace std;

double func1(double y);
double func2(double y);

int main() {

	double y;
	cout << "Vudete y = ";
	cin >> y;

	if (y < 1) {
		cout << "x = " << func1(y);
	}
	else if (y > 1) {
		cout << "X = " << func2(y);
	}
	else if (y == 1) {
		cout << "Y cannot be 1.";
		return 0;
	}
	return 0;
}
double func1(double y) {
	return y = (pow(y, 3) + (pow(y, 4) + 2*y));
}
double func2(double y) {
	return y = 2*(2 * y + 5) / (14 - y / 3);
}