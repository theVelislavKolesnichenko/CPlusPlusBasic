#include<iostream>
using namespace std;
void c(int a, int b, int c);
void d(int a, int b, int d);
void e(int a, int b, int e);
void f(int a, int f);
void g(int a, int g);
void h(int a, int h);

int main()
{
	int a, b;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	int c, d, e, f, g, h;
	cout << "Value of C for a&b is: ";
	c(a, b, c);
	cout << "Value of D for a|b is: ";
	d(a, b, d);
	cout << "Value of E for a^b is: ";
	e(a, b, e);
	cout << "Value of F for ~a is: ";
	f(a, f);
	cout << "Value of G for a<<5 is: ";
	g(a, g);
	cout << "Value of H for a>>4 is: ";
	h(a, h);

	return 0;
}
void c(int a, int b, int c)
{
	int a, b, c;
	c = a & b;
	cout << c<<endl;
}
void d(int a, int b, int d)
{
	int a, b, d;
	d = a | b;
	cout << d<<endl;
}
void e(int a, int b, int e)
{
	int a, b, e;
	e = a ^ b;
	cout << e<<endl;
}
void f(int a, int f)
{
	int a, f;
	f = ~a;
	cout << f<<endl;
}
void g(int a, int g)
{
	int a, g;
	a << 5;
	cout << g<<endl;
}
void h(int a, int h)
{
	int a, h;
	a >> h;
	cout << h<<endl;
}