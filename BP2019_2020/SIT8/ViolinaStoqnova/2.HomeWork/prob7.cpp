#include <iostream>
#include <math.h>

double pix(double y);
using namespace std;

int main()
{
	double y, x;
	cout << "y=";
	cin >> y;
	 
	x = pix(y);
	cout << "x=" << x << endl;
	return 0;
}
double pix(double y)
{
	int x;
	x = 2 * (2 * y + 5) / (14 - y / 3);
	return x;

}