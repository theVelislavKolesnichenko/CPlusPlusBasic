#include <iostream>
using namespace std;

void digit(double q)
{
	double w;
	w = 2 * (2 * q + 5) / (14 - q / 3);
	cout << w;
}
int main()
{
	double r, t;
	cout << "vuvedi dve chisla ";
	cin >> r >> t;
	cout << endl << "rezultat ot r = "; digit(r);
	cout << endl << "rezultat ot t = "; digit(t);

}