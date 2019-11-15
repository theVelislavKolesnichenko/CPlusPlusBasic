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
	return 2*((a-b)/(b-a));
}
