#include <iostream>
#include <math.h>
using namespace std;
void sum(double *n);
int main() {
	double x;
	while (true) {
		cout << "x=";
		cin >> x;
		if ((x >= -100) && (x <= 100)) {
			cout << "y=";
			sum(&x);
		}
	}
	return 0;
}
void sum(double *n) {
	if (*n <= 0) {
		cout << pow((*n), 3) / 4 + 1 << endl;
	}
	else if (*n > 0) {
		cout << sqrt((*n) - 4) << endl;
	}
}