#include <iostream>
using namespace std;

double CALCX(double a, double b);

int main()
{
	double a, b;
	cin >> a >> b;
	cout << "Enter two numbers:\n";
	cout << CALCX(a, b);

	return 0;
}


double CALCX(double a, double b)
{
	double x = 2 * ((a - b) / (b - a));
	return x;
}