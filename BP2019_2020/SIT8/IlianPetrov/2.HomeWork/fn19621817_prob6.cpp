#include <iostream>
#include <math.h>
using namespace std;

float float_in(char ch);
float x(float a, float b);

int main() {
	float a, b, x;
	a = float_in('a');
	b = float_in('b');

	x = double ((pow(a+b,3) + (pow(a,2) +2*b*a - 2*a*b + pow(b,2))));

	cout << "x= " << x << endl;
	return 0;
}
float float_in(char ch)
{
	float f;
	cout << ch << "=";
	cin >> f;
	return f;
}

float x(float a, float b)
{
	return (pow(a + b, 3) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2)));

}