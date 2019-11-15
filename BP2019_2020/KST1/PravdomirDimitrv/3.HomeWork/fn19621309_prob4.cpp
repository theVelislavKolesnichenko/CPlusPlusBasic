#include <iostream>

using namespace std;
double func(double y)
{
	if (y == 0)
	{
		cout << "opitaite s drugo chislo";
	}
	else
	{
		double x = 20 / y;
		cout << x;
	}
	return 0;
}



void main() {
	double y;
	cout << "Vyvedete chislo Y " << endl;
	cin >> y;
	cout << "=stoinost na x" << func(y) << endl;
}
