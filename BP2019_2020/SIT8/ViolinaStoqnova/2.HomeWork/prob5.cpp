#include <iostream>
#include <math.h>

double pix(double a, double b);
using namespace std;

int main()
{
	double a, b,x;
	cout << "a=" ;
	cin >> a;
	cout << "b=" ;
	cin >> b;
	x = pix(a, b);
	cout << "x=" << x << endl;
	return 0;
}
double pix(double a, double b)
{
	int x;
	 x=2 * ((a - b) / (b - a));
	 return x;

}