#include <iostream>
#include <math.h>
using namespace std;

double sum(float x);

int main()
{

	double x;

	cin >> x;

	cout << sum(x) << endl;

	return 0;
}

double sum(float x)
{
	double v;
	double sum = 0;
	
	for (int n = 1; n <= 20; n++)
	{
		v = (pow(x, n) + 1.0 / (2 * n) +  1);
		sum += v;
	}
	
	return sum;
}