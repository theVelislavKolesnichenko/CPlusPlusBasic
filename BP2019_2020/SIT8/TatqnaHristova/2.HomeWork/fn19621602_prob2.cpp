#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

float realNum(char ch);
float mathSum(float a, float b);
float mathSub(float c, float d);
float mathDif(float e, float f);
float mathMul(float g, float h);

int main()
{
	float a, b, c, d, e, f, g, h;
	a = realNum('a');
	b = realNum('b');
	cout << a << "+" << b << "=" << mathSum(a, b) << endl;
	c = realNum('c');
	d = realNum('d');
	cout << c << "-" << d << "=" << mathSub(c, d) << endl;
	e = realNum('e');
	f = realNum('f');
	cout << e << "/" << f << "=" << setprecision(2) << mathDif(e, f) << endl;
	g = realNum('g');
	h = realNum('h');
	cout << g << "*" << h << "=" << mathMul(g, h) << endl;

	return 0;
}
float realNum(char ch) {
	float p;
	cout << ch << "=";
	cin >> p;
	return p;
}
float mathSum(float a, float b) {
	return a + b;
}
float mathSub(float c, float d) {
	return c - d;
}
float mathDif(float c, float d) {
	return c / d;
}
float mathMul(float g, float h) {
	return g * h;
}