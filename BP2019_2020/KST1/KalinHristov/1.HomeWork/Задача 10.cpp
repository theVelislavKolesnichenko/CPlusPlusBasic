#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, b;
	cout << "Vuvejdame stranite na pravougulnik" << endl;
	cin >> a;
	cin >> b;
	double P = 2 * a + 2 * b;
	double S = a * b;
	cout << "Izvejdame perimetura P=" << P << endl << "Izvejdame liceto S=" << S << endl;
}
