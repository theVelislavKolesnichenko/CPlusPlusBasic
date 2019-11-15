#include <iostream>
using namespace std;

double po_golqmo(double a, double b);

int main()
{
	double a, b;

	cout << "Vuvedi a = ";
	cin >> a;
	cout << "Vuvedi b = ";
	cin >> b;

	if ( po_golqmo(a,b) == 0 )
	{
		cout << "I dvete chisla sa ravni na " << a << endl;
	}

	else if (po_golqmo(a, b) == a)
	{
		cout << "Po-golqmoto ot dvete chisla e 'a' koeto e ravno na " << po_golqmo(a, b) << endl;
	}
	else if (po_golqmo(a, b) == b)
	{
		cout << "Po-golqmoto ot dvete chisla e 'b' koeto e ravno na " << po_golqmo(a, b) << endl;
	}

	return 0;
}

double po_golqmo(double a, double b)
{
	if (a > b)
	{
		return a;
	}
	
	else if (b > a)
	{
		return b;
	}
	
	else if (a == b)
	{
		return 0;
	}

	
}