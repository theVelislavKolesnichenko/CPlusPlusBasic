#include <iostream>
#include <math.h>
double double_in(char ch);
double x(double a, double b, double c, double d);
using namespace std;
int main()
{
	double a, b, c, d, x;

	a = double_in('a');
	b = double_in('b');
	c = double_in('c');
	d = double_in('d');

	cout << "x=" << (a, b, c, d) << endl;
	return 0;
}
double double_in(char ch)
{
	double f;
	cout << ch << "=";
	cin >> f;
	return f;
}
double f(double a, double b, double c, double d)
{
	return  (a + b + c + d) / 4;
}
