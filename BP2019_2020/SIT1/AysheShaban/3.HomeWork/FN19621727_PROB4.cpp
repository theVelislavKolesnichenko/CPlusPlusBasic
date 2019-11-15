#include <iostream>
using namespace std;

double uravnenie(double y, double x)
{
	x = 20 / y;

	if (y != 0)
	{
		cout << "x =" << x;
		return 0;
	}
	else
	{
		cout << "Ne moje da se deli na 0";
		return 0;
	}
}

int main()

{
	double y, x;
	cout << "Vavedi realno chislo" << endl;
	cout << " y = ";
	cin >> y;
	cout << "\n" << endl;
	cout << "x = 20 / y " << endl;
	x = 20 / y;
	cout << "\n" << endl;
	uravnenie(y, x);
	cout << "\n";
	return 0;
}
