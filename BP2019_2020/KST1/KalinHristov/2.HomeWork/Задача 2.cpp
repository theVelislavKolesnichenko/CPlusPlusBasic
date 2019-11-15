#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
double sum(double a, double b);
double izv(double a, double b);
double umn(double a, double b);
double del(double a, double b);

double del(double a, double b)
{
	double del1 = a / b;
	return del1;
}
double umn(double a, double b)
{
	double umn1 = a * b;
	return umn1;
}
double sum(double a, double b)
{
	double sum1 = a + b;
	return sum1;

}
double izv(double a, double b)
{
	double izv1 = a - b;
	return izv1;
}

int main()
{
	double a, b, c, d, e, f, g, h;
	cin >> a;
	cin >> b;
	cout <<"sborut na chislata e:" << sum(a, b) << endl;
	cin >> c;
	cin >> d;
	cout << "izvajdaneto na chislata e:" << izv(c, d) << endl;
	cin >> e;
	cin >> f;
	cout << "umnojenieto na chislata e:" << umn(e, f) << endl;
	cin >> g;
	cin >> h;
	cout << "delenieto na chislata e:" << del(g, h) << endl;
}
