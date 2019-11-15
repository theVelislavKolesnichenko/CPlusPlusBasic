#include <iostream>
using namespace std;
double double_in(char ch);
double x(double a, double b);
double y(double a, double b);
double z(double a, double b);
double c(double a, double b);
int main() {
	double a, b;
	a = double_in('a');
	b = double_in('b');
	cout << "x=" << x(a, b) << endl;
	a = double_in('a');
	b = double_in('b');
	cout << "y=" << y(a, b) << endl;
	a = double_in('a');
	b = double_in('b');
	cout << "z=" << z(a, b) << endl;
	a = double_in('a');
	b = double_in('b');
	cout << "c=" << c(a, b) << endl;
	return 0;
}
double double_in(char ch) {
	double a;
	cout << ch << '=';
	cin >> a;
	return a;
}
double x(double a, double b) {
	return a + b;
}
double y(double a, double b) {
	return a - b;
}
double z(double a, double b) {
	return a / b;
}
double c(double a, double b) {
	return a * b;
}