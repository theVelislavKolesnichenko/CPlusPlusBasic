#include <iostream>
using namespace std;

double RNum(char a);
double SUM(double a, double b) { return a + b; };
double MINUS(double a, double b) { return a - b; };
double MULTIPLY(double a, double b) { return a * b; };
double DEVIDE(double a, double b) { return a / b; };

int main()
{
	double a, b;
	a = RNum('a');
	b = RNum('b');
	cout << "a+b=" << SUM(a, b)<<endl;
	a = RNum('a');
	b = RNum('b');
	cout << "a-b=" << MINUS(a, b) << endl;
	a = RNum('a');
	b = RNum('b');
	cout << "a/b=" << DEVIDE(a, b) << endl;
	a = RNum('a');
	b = RNum('b');
	cout << "a*b=" << MULTIPLY(a, b) << endl;
	return 0;
}

double RNum(char s)
{
	double a;
	cout << s << "=";
	cin >> a;
	return a;
};