#include <iostream>
using namespace std;

double mul(double a, double b);

int main()
{
	double a, b, c;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;

	c = mul(a, b);

	cout << "c= " << c << endl;
	system("pause");
	return 0;
}

double mul(double a, double b)
{
	double result;

	result = a * b;

	return result;
}