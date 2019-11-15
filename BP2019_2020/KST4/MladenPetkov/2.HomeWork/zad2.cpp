#include <iostream>
using namespace std;

double double_a(char lk);
double A(double a, double b);


int main()
{
	double a, b;
	cout << "x=";
	cin >> a;
	cout << "y=";
	cin >> b;
	cout << "A=" << A(a, b) << endl;

	return 0;
}
double double_a(char lk)
{
	double x;
	cout << lk << "=";
	cin >> x;
	
	return x;
}

double A(double a, double b)
{
	return a * b;
}