#include <iostream>
using namespace std;

double printNumber(double number);
double SUM(double a, double b);
double SUB(double a, double b);
double DIV(double a, double b);
double MUL(double a, double b);

int main()
{
	
	
	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	cout << a << " + " << b << " = " << SUM(a, b) << endl << endl;

	
	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	cout << a << " - " << b << " = " << SUB(a, b) << endl << endl;

	
	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	cout << a << " / " << b << " = " << DIV(a, b) << endl << endl;

	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	cout << a << " * " << b << " = " << MUL(a, b) << endl << endl;
	return 0;
}

double printNumber(double number)
{
	return number;
}
double SUM(double a, double b)
{
	return a + b;
}
double SUB(double a, double b)
{
	return a - b;
}
double DIV(double a, double b)
{
	return a / b;
}
double MUL(double a, double b)
{
	return a * b;
}