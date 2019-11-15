#include <iostream>
#include <math.h>
using namespace std;
double uravnenie(double a, double c);
int main()
{
	double y, a, c;
	cout << "a = ";
	cin >> a;
	cout << "c = ";
	cin >> c;
	y = uravnenie(a, c);
	if ((a < -2) || (c == 0))
	{
		cout << "Invalid Input" << endl;
	}
	else { cout << y << endl; }
	return 0;
}
double uravnenie(double a, double c)
{
	double result = sqrt(a + 2) - 2 / c;
	return result;
}