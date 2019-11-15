#include <iostream>
#include <math.h>
using namespace std;
double Tony(char ch);
double Calculation(double a, double b);
int main()
{
	double a, b;
	a = Tony('a');
	b = Tony('b');
	cout << "x = (a+b)^3 + (a^2 + 2ba - 2ab + b^2) = " << Calculation(a, b) << endl;
}

double Tony(char ch)
{
	double z;
	cout << ch << " = ";
	cin >> z;
	return z;
}
double Calculation(double a, double b)
{
	return pow((a+b),3)+(pow(a,2)+2*b*a-2*a*b+pow(b,2));
}
