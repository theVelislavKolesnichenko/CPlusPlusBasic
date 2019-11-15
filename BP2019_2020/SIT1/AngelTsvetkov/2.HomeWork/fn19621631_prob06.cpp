#include <iostream>
#include <math.h>
using namespace std;
double par(char ch)
{
	double b;
	cout << ch << " = ";
	cin >> b;
	return b;
}
double total(double a, double b);

int main()
{
	double a, b, x;
	a = par('a');
	b = par('b');
	x = total(a, b);
	cout << "The total is: " << x << endl;
	return 0;
}
double total(double a, double b)
{
	double result;
	result = pow((a+b),3) + (pow(a,3) + 2*a*b - 2*a*b + pow(b,2));
	return result;
}



