#include<iostream>
using namespace std;
int Sum(int a, int b);
int main()
{
	double a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	double c = Sum(a, b);
	cout << "Sum c=" << a << "+" << b << "=" << c << endl;
	return 0;
}
int Sum(int a, int b)
{
	return a + b;
}