#include <iostream>
using namespace std;

double dif(double a, double b);

int main()
{
	double a, b, c;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;

	c = dif(a, b);

	cout << c << endl;
	system("pause");
	return 0;
}

double dif(double a, double b)
{
	double result;

	result = a / b;

	return result;
}