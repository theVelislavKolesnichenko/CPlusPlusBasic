#include <iostream>
#include <conio.h>
using namespace std;
double plus1(double a, double b);
double minus1(double a, double b);
double mul(double a, double b);
double del(double a, double b);

int main()
{
	double a,b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << a << "+" << b << "=" << plus1(a, b) << endl << a << "-" << b << "=" << minus1(a, b) << endl << a << "*" << b << "=" << mul(a, b) << endl << a << "/" << b << "=" << del(a, b) << endl;
	return 0;
}
double plus1(double a, double b)
{
	return a + b;
}
double minus1(double a, double b)
{
	return a - b;
}
double mul(double a, double b)
{
	return a * b;
}
double del(double a, double b)
{
	return a / b;
}