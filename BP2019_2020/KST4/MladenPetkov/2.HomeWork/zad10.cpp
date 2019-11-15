#include<iostream>
using namespace std;
double Lice(double a, double b);

struct Strani {
	double x, y;
}strani1;

int main()
{
	double a, b;
	Strani strani1;
	cout << "a=";
	cin >> strani1.x;
	cout << "b=";
	cin >> strani1.y;
	a = strani1.x;
	b = strani1.y;
	cout << "S=" << Lice(a, b) << "kv.cm";
	return 0;
}
double Lice(double a, double b)
{
	double S = a*b;
	return S;
}