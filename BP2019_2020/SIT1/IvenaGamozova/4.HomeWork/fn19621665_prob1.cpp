#include <iostream>
#include <math.h>
using namespace std;
double kuku(double a, double c);

int main() {
	double a, c;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	cout << kuku(a, c) << endl;
	return 0;
}
double kuku(double a, double c) {
	double y;
	if (a < -2 || c == 0) cout << "Invalid Input." << endl;
	else {
		y = sqrt(a + 2) - (2 / c);
		return y;
	}
}