#include <iostream>
using namespace std;
void bat(double q, double w)
{
	double e;
	e = 2 * ((q - w) / (w - q));
	cout << e;
}
int main()
{
	double r, t;
	cout << "vuvedi dve chisla"; 
	cin >> r >> t;
	cout << endl << "rezultatite ";
	bat(r, t);
}