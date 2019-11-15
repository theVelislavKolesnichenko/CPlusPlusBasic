#include <iostream>
using namespace std;

double AVG(double a, double b) { return (a + b) / 2; };
double RNum(char a);

int main()
{
	int a, b, c, d;
	a = RNum('a');
	b = RNum('b');
	c = RNum('c');
	d = RNum('d');
	cout <<"average="<< AVG(AVG(a,b), AVG(c,d));
	return 0;
}

double RNum(char s)
{
	double a;
	cout << s << "=";
	cin >> a;
	return a;
};