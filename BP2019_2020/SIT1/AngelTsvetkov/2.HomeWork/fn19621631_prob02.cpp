#include <iostream>
using namespace std;
double double_in(char ch)
{
	double h;
	cout << ch << " = ";
	cin >> h;
	return h;
}
double sum(double a, double b);
double sub(double c, double d);
double mul(double e, double f);
double div(double g, double h);
int main()
{

	double a, b, c, d, e, f, g, h;
	double plus, minus, umnojenie, delenie;
	cout << "Addition:" << endl;
	a = double_in('a');
	b = double_in('b');
	cout << "Substraction:" << endl;
	c = double_in('c');
	d = double_in('d');
	cout << "Multiplication:" << endl;
	e = double_in('e');
	f = double_in('f');
	cout << "Division:" << endl;
	g = double_in('g');
	h = double_in('h');
	cout << "Results:" << endl;
	plus = sum(a, b);
	cout << a << " + " << b << " = " << plus << endl;
	minus = sub(c, d);
	cout << c << " - " << d << " = " << minus << endl;
	umnojenie = mul(e, f);
	cout << e << " * " << f << " = " << umnojenie << endl;
	delenie = div(g, h);
	cout << g << " / " << h << " = " << delenie << endl;
	return 0;
}
double sum(double a, double b)
{
	double result;
	result = a + b;
	return result;
}
double sub(double c, double d)
{
	double result;
	result = c-d;
	return result;
}
double mul(double e, double f)
{
	double result;
	result = e*f;
	return result;
}
double div(double g, double h)
{
	double result;
	result = g/h;
	return result;
}





