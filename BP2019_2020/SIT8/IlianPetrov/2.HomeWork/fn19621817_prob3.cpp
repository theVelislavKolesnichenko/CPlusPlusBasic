#include <iostream>
#include <math.h>
using namespace std;

float float_in(char ch);
float x(float a, float b, float c, float d);

int main() {
	float a, b, c, d, x;
	a = float_in('a');
	b = float_in('b');
	c = float_in('c');
	d = float_in('d');

	x = float((a + b + c + d) / 4);
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

float X(float a, float b, float c, float d)
{
	return (a + b + c + d) / 4;
	
}