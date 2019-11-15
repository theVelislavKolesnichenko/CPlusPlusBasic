#include <iostream>
#include <cmath>
using namespace std;
double CALCX(double a, double b);

int main()
{
	double a, b;
	cout << "Enter two numbers:\n";
	cin >> a >> b;
	cout << CALCX(a, b);

	return 0;
}

double CALCX(double a, double b)
{
	double x = pow((a + b), 3) + (pow(a, 2) + 2 * a * b + pow(b, 2));
	return x;
}