#include <iostream>
#include <conio.h>
using namespace std;
double Average(double a, double b, double c, double d);
double Tony(char ch);
int main()
{
	int a, b, c, d;
	a = Tony('a');
	b = Tony('b');
	c = Tony('c');
	d = Tony('d');
	cout << "Srednata stoinost na chislata e = " << Average(a, b, c, d) << endl;
}
double Tony(char ch)
{
	double z;
	cout << ch << " = ";
	cin >> z;
	return z;
}
double Average(double a, double b, double c, double d)
{
	return (a + b + c + d) / 4;
}
