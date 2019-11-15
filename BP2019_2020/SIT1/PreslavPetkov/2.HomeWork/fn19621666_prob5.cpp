#include <iostream>
using namespace std;
double double_in(char ch);
double x(double a, double b);
int main() {
	double a, b;
	a = double_in('a');
	b = double_in('b');
	cout << "x=" << x(a, b) << endl;
	return 0;
}
double double_in(char ch) {
	double a;
	cout << ch << '=';
	cin >> a;
	return a;
}
double x(double a, double b) {
	return 2 * ((a - b) / (b - a));
}