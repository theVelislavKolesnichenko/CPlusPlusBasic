#include <iostream>
#include <math.h>
using namespace std;

struct rectangle {
	double a, b;
};

rectangle Rec(char a, char b);
double Surface(rectangle a);

int main()
{
	rectangle a;
	a = Rec('a', 'b');
	cout << Surface(a);
}

rectangle Rec(char a, char b)
{
	rectangle a1;
	cout << a << "=";
	cin >> a1.a;
	cout << b << "=";
	cin >> a1.b;
	return a1;
};
double Surface(rectangle a1)
{
	return a1.a * a1.b;
}