#include <iostream>
using namespace std;

double calc(double a, double b, double d);

int main()
{
	double a, b, d;
	cout << "Enter = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter d = ";
	cin >> d;
	cout << calc(a, b, d) << endl;

	system("Pause");
	return 0;
}

double calc(double a, double b, double d)
{
	return pow(a, 2) + 2 * b * a + d == 0;
}