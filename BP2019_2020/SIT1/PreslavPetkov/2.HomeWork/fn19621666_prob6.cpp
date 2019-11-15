#include <iostream>
using namespace std;
double double_in(char ch);
double x(double a, double b);
int main() {
	double a, b;
	a = double_in('a');
	b = double_in('a');
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
	return pow((a + b), 3) + (pow(a, 2) + 2 * a * b + pow(b, 2));
}