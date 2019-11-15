#include <iostream>
#include <math.h>
using namespace std;

int eq(double y); 
int eq2(double y); 
int main() {

	double y;

	cout << "Vuvete y = ";
	cin >> y;

	if (y <= -5)
		cout << "X = " << eq2(y);

	else if (5 < y)
		cout << "x = " << eq(y);
	else
		cout << "Vuvedete drugo chislo" << endl;
	return 0;
}
int eq(double y) {
	return y = 2 * (2 * y + 5) / (14 - y / 3);
}
int eq2(double y) {
	return y = pow(y, 3) + (pow(y,4) + 2 * y);
}