#include<iostream>
#include<cmath>
using namespace std;

void fun1(double a, double b)
{
	double x;
	x = (pow(a + b, 3)) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2));
	cout << x;
}
int main()
{
	double y, z;
	cout << "Vuvedi dve chisla " << endl;
	cin >> y;
	cin >> z;
	cout << "Rezultatut ot formulata e: ";
	fun1(y, z);
}