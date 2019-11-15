#include<iostream>
using namespace std;
void ch(int h)
{
	cout << "vuvedi realno chislo" << endl;
	cin >> h;
}
void zad(double a, double b)
{
	double x;
	x = pow((a + b),3) + (pow(a, 2) + 2 * b*a - 2 * a*b + pow(b, 2));
	cout << x;
}
int main()
{
	double m, n;
	cout << "vuvedete stoinosti za 'm' i 'n'" << endl;
	cin >> m >> n;
	cout << "x= "; zad(m, n);
}