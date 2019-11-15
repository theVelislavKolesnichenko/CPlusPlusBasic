#include <iostream>
using namespace std;
double redica(double x);

int main()
{
	double x;
	x = 0;
	x = redica(x);
	return 0;
}

double redica(double x)
{
	double n, v,m;
	m = 0;
	cout << "Vavedi chislo" << endl;
	cout << "x=";
	cin >> x;

	cout << "v=((x * n + 1) / (2 * n + 1))" << endl;
	cout << "n se izmenq ot 1 do 20" << endl;

	for (n = 20; n > 0; n--)
	{
		v = (((x * n) + 1) / ((2 * n) + 1));
		cout << "v=" << v << endl;
		m = m + v;
	}
	cout << "\n";
	cout << "SUM = " << m;
	return 0;
}