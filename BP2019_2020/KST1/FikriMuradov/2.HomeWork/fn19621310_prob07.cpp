#include <iostream>
#include <math.h>
using namespace std;

double double_in(char ch);
double X(double y);

int main()
{
	double y;
	y = double_in('y');

	cout << "X = " << X(y) << endl;

	return 0;
}

double double_in(char ch)
{
	double d;
	cout << ch << "=";
	cin >> d;
	return d;
}

double X(double y)
{
	return 2*(2*y + 5) / (14 - y / 3);
}
