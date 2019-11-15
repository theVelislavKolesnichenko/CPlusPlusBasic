#include <iostream>
using namespace std;
double Tony(char ch);
double Calculation(double a, double b);
int main()
{ 
	double a, b;
	a = Tony('a');
	b = Tony('b');
	cout << "x = 2*((a-b)/(b-a)) = " << Calculation(a, b) << endl;
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
	return 2 * ((a - b) / (b - a));
}
