#include <iostream>
using namespace std;

double double_in(char ch);
int RAV(int a, int b);

int main()
{

	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "x=" << RAV(a, b);
	return 0;
}

int RAV(int a, int b)
{
	int x = pow(a,3)+pow(b,3) + (pow(a, 2) + 2 * (b * a) - 2 * (a * b) + pow(b, 2));
	return x;
}

double double_in(char ch)
{
	double f;
	cout << ch << "=";
	cin >> f;
	return 0;
}