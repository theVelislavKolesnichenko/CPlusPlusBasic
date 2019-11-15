#include <iostream>

using namespace std;

int main()
{
	int a, b;
	double c, d;

	cout << "A= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	c = a / b;
	cout << "Result = " << c << endl; // Дробната част не се записва

	d = (float)a / b;
	cout << "Result = " << d << endl; // Дробната част се записва

	return 0;
}
