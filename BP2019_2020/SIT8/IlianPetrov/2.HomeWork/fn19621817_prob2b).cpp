#include <iostream>
using namespace std;

double sub(double a, double b);

int main()
{
	double a, b, c;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;

	c = sub(a, b);

	cout << c << endl;
	system("pause");
	return 0;
}

double sub(double a, double b)
{
	double result;

	result = a - b;

	return result;
}