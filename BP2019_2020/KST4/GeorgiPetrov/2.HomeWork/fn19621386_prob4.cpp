#include<iostream>
#include<math.h>
using namespace std;
void fun1(double a, double b)
{
	double x;
	x = (pow(a + b, 3)) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2));
	cout << x;
}
int main()
{
	double ch1, ch2;
	cout << "vuvedi dve chisla"; cin >> ch1 >> ch2;
	cout << endl << "rezultata ot formulata e"; fun1(ch1, ch2);
}