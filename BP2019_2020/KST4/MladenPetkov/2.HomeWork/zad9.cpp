#include<iostream>
using namespace std;
double Perimetar(double a, double b, double c);

struct Strani {
	double x, y, z;
}strani1;

int main()
{
	double a, b, c;
	Strani strani1;
	cout << "a=";
	cin >> strani1.x;
	cout << "b=";
	cin >> strani1.y;
	cout << "c=";
	cin >> strani1.z;
	a = strani1.x;
	b = strani1.y;
	c = strani1.z;
	
	cout << "P=" << Perimetar(a, b, c) << "cm";


	return 0;
}
double Perimetar(double a, double b, double c)
{
	
	double P = a + b + c;
	return P;

}