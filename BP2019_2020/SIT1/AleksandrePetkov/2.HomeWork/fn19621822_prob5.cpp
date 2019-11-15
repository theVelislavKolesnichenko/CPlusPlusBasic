#include <iostream>
using namespace std;

double inDouble(char a) {
	double n;
	cout << a << " = ";
	cin >> n;
	return n;
}
double func(double a, double b) {
	return 2 * ((a - b) / (b - a));
}

int main() {
	double a = inDouble('a');
	double b = inDouble('b');
	cout << "x = " << func(a,b) << endl;
}