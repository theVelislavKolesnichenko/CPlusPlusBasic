#include <iostream>
#include <math.h>
using namespace std;
double Tony(char ch);
double Calculation(double y);
int main()
{
	double x, y;
	y = Tony('y');
	x = Calculation(y);
	cout << "x = 2*(2*y + 5)/(14 - y/3) = " << x << endl;
}

double Tony(char ch)
{
	double z;
	cout << ch << " = ";
	cin >> z;
	return z;
}
double Calculation(double y)
{
	return 2*(2*y + 5)/(14-y/3);
}
