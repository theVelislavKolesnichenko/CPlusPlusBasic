#include <iostream>
using namespace std;
int int_in(char ch)
{
	int d;
	cout << ch << " = ";
	cin >> d;
	return d;
}
double av(int a, int b, int c, int d);
int main()
{
	int a, b, c, d;
	double x;
	a = int_in('a');
	b = int_in('b');
	c = int_in('c');
	d = int_in('d');
	x = av(a, b, c, d);
	cout << "Average = " << x << endl;

	return 0;
}
double av(int a, int b, int c, int d)
{
	double result;
	result = (double)(a + b + c + d) / 4;
	return result;
}