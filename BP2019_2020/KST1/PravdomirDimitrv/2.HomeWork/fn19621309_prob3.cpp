#include <iostream>
#include <conio.h>
using namespace std;
double avrg(double a, double b, double c, double d);
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
	cout << "Average result: " << avrg(a, b, c, d);
	return 0;
}
double avrg(double a, double b, double c, double d)
{
	return (a + b + c + d) / 4;
}