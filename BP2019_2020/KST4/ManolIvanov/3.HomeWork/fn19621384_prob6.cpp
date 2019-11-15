#include<iostream>
using namespace std;
void zad1(double y)
{
	double x;
	x = pow(y, 3) + (pow(y, 4) + 2 * y);
	cout << x;
}
void zad2(double y)
{
	double x;
	x = 2 * (2 * y + 5) / (14 - y / 3);
	cout << x;
}
int main()
{
	double a = 24;
	if (a>=58&&a<=87)
	{
		zad1(a);
	}
	if (a>15&&a<58)
	{
		zad2(a);
	}
}