#include <iostream>
#include <cmath>
using namespace std;
double funct(double a, double b, double d)
{
	double x1 = (-b + sqrt(b * b - 4 * a * d)) / (2 * a);cout<<x1<<endl;
	double x2 = (-b - sqrt(b * b - 4 * a * d)) / (2 * a);cout<<x2<<endl;
	return 0;
}

int main()
{
	double a, b, d;
	cin >> a >> b >>d;
	cout << funct(a, b, d) << endl;
	return 0;
}