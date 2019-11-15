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
	x = 2 * ((a - b) / (b - a));
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