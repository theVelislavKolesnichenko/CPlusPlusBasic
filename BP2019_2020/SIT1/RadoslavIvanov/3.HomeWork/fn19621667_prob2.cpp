#include <iostream>
using namespace std;

double Max(double a, double b);

int main()
{
	double a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "Max(a,b)=" << Max(a, b) << endl;
}

double Max(double a, double b)
{
	if (a > b) { return a; }
	else { return b; }
}