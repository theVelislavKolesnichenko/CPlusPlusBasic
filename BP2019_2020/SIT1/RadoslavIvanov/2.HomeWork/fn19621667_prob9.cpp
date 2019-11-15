#include <iostream>
#include <math.h>
using namespace std;

struct triangle {
	double a, b, c;
};

triangle Tri(char a, char b, char c);
double Perimeter(triangle a);

int main()
{
	triangle a;
	a = Tri('a', 'b', 'c');
	cout << Perimeter(a);
}

triangle Tri(char a, char b, char c)
{
	triangle a1;
	cout << a << "=";
	cin >> a1.a;
	cout << b << "=";
	cin >> a1.b;
	cout << c << "=";
	cin >> a1.c;
	return a1;
};
double Perimeter(triangle a1)
{
	return a1.a + a1.b + a1.c;
}