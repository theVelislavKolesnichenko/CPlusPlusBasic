#include <iostream>
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
	cout << "The total of 2*((a-b)/(b-a)) is: " << x << endl;
	return 0;
}
double total(double a, double b)
{
	double result;
	result = 2 * ((a - b) / (b - a));
	return result;
}