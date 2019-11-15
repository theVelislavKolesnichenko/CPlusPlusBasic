#include <iostream>
#include <math.h>
using namespace std;

double uravnenie(double a, double b, double c);

int main()
{
	double a, b, c;
	cout << "Vavedi tri chisla" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	uravnenie(a, b, c);
	return 0;

}

double uravnenie(double a, double b, double c)
{
	double D, x1 , x2;

	cout << "ax2 + bx + c = 0" << endl;
	cout << "Koreni na uravnenieto sa" << endl;

	D = pow(b, 2) - (4 * a * c);

	if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		cout << "x1 =" << x1 << endl;
		x2= (-b - sqrt(D)) / (2 * a);
		cout << "x2 =" << x2 << endl;
	}
	else if (D == 0)
	{

		x1 = x2 = -b / (2 * a);
		cout << "x1 = x2 =" << x1 << endl;
	}
    else
	{
		cout << "Nqma reshenie";
	}

	return 0;
}
