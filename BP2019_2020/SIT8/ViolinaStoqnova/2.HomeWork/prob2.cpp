#include <iostream>
#include <math.h>
double pix(double a, double b);
double pix1(double a, double b);
double pix2(double a, double b);

using namespace std;

int main()
{
	
	double a, b, x,x1,x2;
	cout << "a=" << endl;
	cin >> a;
	cout << "b=" << endl;
	cin >> b;

	x = pix(a, b);
	cout << "x=" << x<<endl;
	

	x = pix1(a, b);
	cout << "x1=" << x << endl;
	

	x = pix2(a, b);
	cout << "x2=" << x << endl;
	
	return 0;
}

double pix(double a, double b)
{
	double x;

	x = a + b;
	return x;
}
double pix1(double a, double b)
{
	double x1;
	x1 = a * b;
	return x1;
}
double pix2(double a, double b)
{
	double x2;
	x2 = sqrt(a) / b;
	return x2;
}