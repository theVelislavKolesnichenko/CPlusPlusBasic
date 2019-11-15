#include <iostream>
double pix(double y);
using namespace std;
int main()
{
	double x, y;

	cout << "Enter a number for y=";
	cin >> y;

	x = pix(y);
	cout << "x=" << x << endl;
	return 0;
}
double pix(double y)
{
	double x;

	if (y == 0)
	{
		cout << "Impossible" << endl;
	}
	else
	{
		x = 20 / y;
		return x;
	}

}