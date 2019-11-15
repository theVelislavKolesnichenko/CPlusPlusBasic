#include <iostream>
#include <conio.h>
using namespace std;
double Addition(double a, double b);
double Subtraction(double a, double b);
double Division(double a, double b);
double Multiplication(double a, double b);
double Tony(char ch);
int main()
{
	double a, b;
	a = Tony('a');
	b = Tony('b');
	cout << "a + b = " << Addition(a, b) << endl;
	cout << "a - b = " << Subtraction(a, b) << endl;
	cout << "a / b = " << Division(a, b) << endl;
	cout << "a * b = " << Multiplication(a, b) << endl;
}

double Tony(char ch)
{
	double z;
	cout << ch << " = ";
	cin >> z;
	return z;
}
double Addition(double a, double b)
{
	return a + b;
}
double Subtraction(double a, double b)
{
	return a - b;
}
double Division(double a, double b)
{
	return a / b;
}
double Multiplication(double a, double b)
{
	return a * b;
}