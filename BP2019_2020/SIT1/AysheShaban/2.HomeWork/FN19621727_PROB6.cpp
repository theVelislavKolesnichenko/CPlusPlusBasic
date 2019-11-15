#include <iostream>
#include <math.h>
using namespace std;

float a, b;

float realno(char ch)
{
	float e;
	cout << ch << "=";
	cin >> e;
	return e;
}
float function(float x)
{
	x = pow((a+b),3)+(pow(a,2) + (2*b*a) - (2*a*b) + pow(b,2));
	cout << "x = " << x;
	return x;
}

int main()
{
	float x;
	a = realno('a');
	b = realno('b');
	x = function('x');

	return 0;
}