#include <iostream>
using namespace std;
void y(double a, double c);
int main() {
	double a, c;
	while (true) {
		cout << "a=";
		cin >> a;
		cout << "c=";
		cin >> c;
		y(a, c);
	}
	return 0;
}
void y(double a, double c) {
	if ((a >= 0) && (c != 0)) {
		cout << "y=" << sqrt(a + 2) - 2 / c << endl;
	}
	else {
		cout << "Invalid Input" << endl;
	}
}