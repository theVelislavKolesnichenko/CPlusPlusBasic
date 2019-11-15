#include <iostream>
#include <conio.h>

using namespace std;

double plus1(double a, double b);
double minus(double x, double y);
double sub(double sub1, double sub2);
double multi(double p, double t);

int main()
{
	double a, b, sum1;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	sum1 = plus1(a, b);
	cout << "a+b=" << sum1;
	return 0;
}
double plus1(double a, double b)
{
	a += 2, b += 3;
	return a + b;
}