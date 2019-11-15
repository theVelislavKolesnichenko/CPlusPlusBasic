#include <iostream>
#include <math.h>

using namespace std;

double doubleIn(char);
double equation(double, double);
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

int main()
{
	double a, b;
	a = doubleIn('a');
	b = doubleIn('b');

	cout<<("Result: %f", equation(a, b));

	return 0;
}

double doubleIn(char ch) {
	double f;
	cout<<("ch %c: ", ch);
	cin >> f;
	return f;
}

double equation(double a, double b) {
	double result = pow(add(a, b), 3) + (pow(a, 2) + 2 * b * a + pow(b, 2));
	return result;
}

double add(double x, double y) {
	return x + y;
}

double sub(double x, double y) {
	return x - y;
}

