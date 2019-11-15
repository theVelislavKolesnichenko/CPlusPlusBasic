#include <iostream>
using namespace std;

double RNum(char s);
double X(double a, double b) { return 2*(a - b) / (b - a); };

int main()
{
	double a, b;
	a = RNum('a');
	b = RNum('b');
	cout << "X=2*(a - b) / (b - a)=" << X(a, b) << endl;
	return 0;
}

double RNum(char s)
{
	double a;
	cout << s << "=";
	cin >> a;
	return a;
};