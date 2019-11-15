#include <iostream>
#include <math.h>
using namespace std;

float rez(float a, float b);

int main()
{
	float a, b, x;

	cin >> a >> b;

	x = rez(a, b);

	cout << x << endl;

	return 0;
}

float rez(float a, float b)
{
	float result;

	result = pow(a + b, 3) + (pow(a, 2) + 2*b*a - 2*a*b + pow(b, 2));

	return result;
}