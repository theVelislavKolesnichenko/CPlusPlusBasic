#include <iostream>
#include <math.h>
using namespace std;

float float_in(char ch);
float x(float a, float b);

int main() {
	float a, b, x, y;
	a = float_in('a');
	b = float_in('b');

	x = double((a-b)/(b-a));
	y = 2 * x;

	cout << "y= " << y << endl;
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
	return ((a - b) / (b - a));

}