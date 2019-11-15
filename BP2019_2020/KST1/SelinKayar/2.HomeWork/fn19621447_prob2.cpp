#include <iostream>
using namespace std;
float SUM(float a, float b);
float DIV(float a, float b);
float SUB(float a, float b);
float MUL(float a, float b);

int main()
{
	float a, b, c, d, e, f;
	cout << "a= ";
	cin >> a;

	cout << "b= ";
	cin >> b;

	c = SUM(a, b);
	cout << c << endl;
	d = DIV(a, b);
	cout << d << endl;
	e = SUB(a, b);
	cout << e << endl;
	f = MUL(a, b);
	cout << f << endl;

	return 0;
}
float SUM(float a, float b)
{
	float result;
	cout << a << "+" << b << "=";
	result = a + b;
	return result;

}
float DIV(float a, float b)
{
	float result;
	cout << a << "-" << b << "=";
	result = a - b;
	return result;
}
float SUB(float a, float b)
{
	float result;
	cout << a << "*" << b << "=";
	result = a * b;
	return result;
}
float MUL(float a, float b)
{
	float result;
	cout << a << "/" << b << "=";
	result = a / b;
	return result;
}