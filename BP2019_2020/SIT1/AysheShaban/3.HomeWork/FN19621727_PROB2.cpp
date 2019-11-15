#include <iostream>
using namespace std;

double chislo(double a, double b)
{
	if (a > b)
	{
		cout << "a > b" << endl;
		cout << a << " > " << b << endl;
		return 0;
	}
	else
	{
		cout << "b > a" << endl;
		cout << b << " > " << a << endl;
		return 0;
	}

}

int main()
{
	double a, b;
	cout << "Vavedi dve chisla" << endl;
	cout << " a = ";
	cin >> a;
	cout << " b = ";
	cin >> b;

	chislo(a, b);

	return 0;
}