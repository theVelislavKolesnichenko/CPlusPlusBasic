#include <iostream>
using namespace std;
double sum(double y);
int main() {
	double y;
	cout << "y=";
	cin >> y;
	cout << "x=" << sum(y) << endl;
	return 0;
}
double sum(double y) {
	if ((y >= 58) && (y <= 87)) {
		return pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else if ((y > 15) && (y < 58)) {
		return 2 * (2 * y + 5) / (14 - y / 3);
	}
}