#include <iostream>
#include <math.h>
using namespace std;

double input(char ch);
double func(double x);

int main() {
	double x = input('x');
	
	cout << "v = " << func(x) << endl;
}

double input(char ch) {
	double n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
double func(double x) {
	double sum = 0;
	for (int i = 1; i <= 20; i++) {
		sum += pow(x, i) + 1.0 / (2 * i) + 1;
	}
	return sum;
}