#include <iostream>
#include <math.h>
using namespace std;

float float_in(char ch);
float x(float y);

int main() {
	float y,x,z;
	y = float_in('y');

	x= double((2*y + 5) / (14-y / 3));
	z = 2 * x;

	cout << "y= " << z << endl;
	return 0;
}
float float_in(char ch)
{
	float f;
	cout << ch << "=";
	cin >> f;
	return f;
}

float x(float y)
{
	return ((2 * y + 5) / (14 - y / 3));

}