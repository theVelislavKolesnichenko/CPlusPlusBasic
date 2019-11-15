#include <iostream>
#include <conio.h>
using namespace std;
double sredno(double a, double b, double c, double d);
int main()
{
	double a, b, c, d;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	cout << "srednoednata stoinost na chislata e " << sredno(a, b, c, d);
	return 0;
}
double sredno(double a, double b, double c, double d)
{
	return (a + b + c + d) / 4;
}

