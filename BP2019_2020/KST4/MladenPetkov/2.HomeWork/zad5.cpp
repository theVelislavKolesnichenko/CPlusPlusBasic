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
	int x= 2*((a - b) / (b - a));
	return x;
}

double double_in(char ch)
{
	double f;
	cout << ch << "=";
	cin >> f;
	return 0;
}