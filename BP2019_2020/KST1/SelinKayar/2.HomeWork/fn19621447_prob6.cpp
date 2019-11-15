#include <iostream>
using namespace std;

float mul(float a, float b)//multiplication
{
	float r;
	r = (a + b) * (a + b) * (a + b);
	return r;
}
float equ(float a, float b)//equalation
{
	float z;
	z = (a * a + 2 * b * a - 2 * a * b + b * b);
	return z;
}
int main()
{
	float a, b, x;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	x = mul(a, b) + equ(a, b);
	cout << "Result= " << x << endl;
	return 0;
}