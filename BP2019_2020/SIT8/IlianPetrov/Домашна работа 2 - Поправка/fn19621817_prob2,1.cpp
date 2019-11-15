#include <iostream>
using namespace std;

double sum(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);
int main()
{
	double a, b;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;

	cout << "sum= " << sum(a, b) << endl;
	cout << "sub= " << sub(a, b) << endl;
	cout << "mul= " << mul(a, b) << endl;
	cout << "div= " << div(a, b) << endl;
	return 0;
}

double sum(double a, double b)
{
	return a + b;
}
double sub(double a, double b)
{
	return a - b;
}
double mul(double a, double b)
{
	return a * b;
}
double div(double a, double b)
{
	return a / b;
}