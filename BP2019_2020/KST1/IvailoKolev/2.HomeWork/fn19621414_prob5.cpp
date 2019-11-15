#include <iostream>

using namespace std;
void fun1(double a, double b)
{
	double x;
	x = 2 * ((a - b) / (b - a));
	cout << x;
}
int main()
{
	double c, d;
	cout << "Vuvedi dve chisla ";
	cin >> c;
	cin>> d;
	cout<<"Rezultatut e:";
	fun1(c,d);
}