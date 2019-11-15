#include <iostream>
#include <math.h>
using namespace std;

double X(double y);
int main()
{
	double y;
	cout << "y=";
	cin >> y;
	cout << X(y);
}

double X(double y)
{
	if (y < 1) return (pow(y, 3) + (pow(y, 4) + 2 * y));
	else return 2 * (2 * y + 5) * (14 - y / 3);
}