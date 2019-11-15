#include <iostream>
#include <math.h>
using namespace std;

double Y(double &x);

int main()
{
	double x;
	do
	{
		cout << "x=";
		cin >> x;
		if (x < -100 || x>100) cout << "Invalid number.\n";
	} while (x < -100 || x>100);
	cout << Y(x);
	return 0;
}

double Y(double &x)
{
	if (x < 0)return sqrt(pow(x, 2) + 1);
	else return (x + 10) / (x - 20);
}