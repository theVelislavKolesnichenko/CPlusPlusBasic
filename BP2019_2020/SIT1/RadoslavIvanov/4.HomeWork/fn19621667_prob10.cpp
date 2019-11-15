#include <iostream>
#include <math.h>
using namespace std;

double Sum(double x);

int main()
{
	double x;
	cout << "x=";
	cin >> x;
	cout << "sum=" << Sum(x);
	return 0;
}

double Sum(double x)
{
	double sum = 0;
	for (int n = 1; n <= 20; n++)
	{
		sum += (pow(x, n) + 1 / (2 * n) + 1);
	}
	return sum;
}