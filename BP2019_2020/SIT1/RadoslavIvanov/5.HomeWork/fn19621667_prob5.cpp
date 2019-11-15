#include <iostream>
using namespace std;

double Sum(double a[10]);

int main()
{
	double a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << Sum(a);
	return 0;
}

double Sum(double a[10])
{
	double sum = 0;
	for (int i = 0; i < 10; i++)
		sum += a[i];
	return sum;
}