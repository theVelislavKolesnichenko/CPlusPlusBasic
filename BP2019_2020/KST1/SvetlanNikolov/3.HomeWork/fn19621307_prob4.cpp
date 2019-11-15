#include <iostream>
#include <functional>
using namespace std;

double functional(double x, double y);

int main() {
	
	double x, y;
	
	cout << "Vudete y = ";
	cin >> y;

	if (y <= 0) {
		cout << "You cannot divide by 0." << endl;
	}
	else if (y > 0) {
		cout << "x = " << functional(x, y) << endl;
	}
	return 0;
}
double functional(double x, double y) {
	return x = 20 / y;
}