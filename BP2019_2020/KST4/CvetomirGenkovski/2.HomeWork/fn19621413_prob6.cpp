#include <iostream>
using namespace std;
void digit(double q, double w)
{
	double e;
	e = (pow(q + w, 3)) + (pow(q, 2) + 2 * w * q - 2 * q * w + pow(w, 2));
	cout << e;
}
int main()
{
	double r, t;
	cout << "vuvedi dve chisla ";
	cin >> r >> t;
	cout << "rezultat" << endl;
	digit(r, t);
}