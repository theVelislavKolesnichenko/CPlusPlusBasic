#include <iostream>
using namespace std;

double inDouble(char a) {
	double n;
	cout << a << " = ";
	cin >> n;
	return n;
}
double add(double x, double y) {
	return x + y;
}
double sub(double x, double y) {
	return x - y;
}
double mul(double x, double y) {
	return x * y;
}
double div(double x, double y) {
	return x / y;
}

int main() {
	double a = inDouble('a');
	double b = inDouble('b');
	cout << a << " + " << b << " = " << add(a, b) << endl;

	double c = inDouble('c');
	double d = inDouble('d');
	cout << c << " - " << d << " = " << sub(c, d) << endl;

	double e = inDouble('e');
	double f = inDouble('f');
	cout << e << " * " << f << " = " << mul(e, f) << endl;

	double g = inDouble('g');
	double h = inDouble('h');
	cout << g << " / " << h << " = " << div(g, h) << endl;
}