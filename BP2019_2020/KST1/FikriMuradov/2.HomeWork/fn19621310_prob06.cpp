#include <iostream>
#include <math.h>
using namespace std;

double double_in(char ch);
double X(double a, double b);

int main()
{
	double a, b;
	a = double_in('a');
	b = double_in('b');

	cout << "X = " << X(a, b) << endl;

	return 0;
}

double double_in(char ch)
{
	double d;
	cout << ch << "=";
	cin >> d;
	return d;
}

double X(double a, double b)
{
	return pow((a+b), 3) + (pow(a, 2) + 2*b*a -2*a*b + pow(b,2));
}
