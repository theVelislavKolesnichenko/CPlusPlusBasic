#include <iostream>
#include <math.h>
 double pix(double a, double b);
using namespace std;

int main()
{
	double a, b,x;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	x = pix(a, b);
	cout << "x=" <<x << endl;
	return 0;
}
double pix(double a, double b)

{
	int x;
	x = (pow((a + b), 3) + (pow(a, 2) + 2 * b * a - 2 * b * a + pow(b, 2)));
	return x;
}