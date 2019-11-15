#include <iostream>
#include <math.h>
using namespace std;

double input(char h);
double func(double a);

int main() {
	double a = input('a');

	cout << "v = " << func(a) << endl;
}

double input(char h) {
	double b;
	cout << h << " = ";
	cin >> b;
	return b;
}
double func(double a) {
	double sum = 0;
	for (int i = 1; i <= 20; i++) {
		sum += pow(a, i) + 1.0 / (2 * i) + 1;
	}
	return sum;
}