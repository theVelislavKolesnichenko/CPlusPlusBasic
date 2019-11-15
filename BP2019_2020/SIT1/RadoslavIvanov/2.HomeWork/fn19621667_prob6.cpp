#include <iostream>
#include <math.h>
using namespace std;

double RNum(char s);
double X(double a, double b);

int main()
{
	double a, b;
	a = RNum('a');
	b = RNum('b');
	cout << "X=" << X(a, b) << endl;
	return 0;
}

double RNum(char s)
{
	double a;
	cout << s << "=";
	cin >> a;
	return a;
};
double X(double a, double b)
{
	return pow((a + b), 3) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2));
};