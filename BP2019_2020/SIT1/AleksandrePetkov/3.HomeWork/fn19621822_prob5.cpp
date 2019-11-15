#include <iostream>
#include <math.h>
using namespace std;
double func1(double y) {
	return pow(y, 3) + (pow(y, 4) + 2 * y);
}
double func2(double y) {
	return 2 * (2 * y + 5) / (14 - y / 3);
}
int main() {
	double y;
	cout << "y=";
	cin >> y;

	if (y < 1) cout << func1(y) << endl;
	else if (y > 1) cout << func2(y) << endl;
}
