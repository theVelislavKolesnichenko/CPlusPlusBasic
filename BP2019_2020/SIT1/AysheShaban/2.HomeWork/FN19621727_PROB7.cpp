#include <iostream>
#include <math.h>
using namespace std;

float y;

float realno(char ch)
{
	float e;
	cout << ch << "=";
	cin >> e;
	return e;
}
float function(float x)
{
	x = (2 * (2 * y + 5)) / (14 - (y / 3));
	cout << "x = " << x;
	return x;
}

int main()
{
	float x;
	y = realno('y');
	x = function('x');

	cout << "\n"<<"\n";

	y = realno('y');
	x = function('x');


	return 0;
}