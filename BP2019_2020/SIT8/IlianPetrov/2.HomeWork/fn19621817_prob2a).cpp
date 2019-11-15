#include <iostream>
using namespace std;

double sum(double a, double b);

int main()
{
	double a, b, c;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;

	c = sum(a, b);

	cout << c << endl;
	system("pause");
	return 0;
}

double sum(double a, double b)
{
	double result;

	result = a + b;

	return result;
}