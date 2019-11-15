#include <iostream>
#include <conio.h>

using namespace std;

double equation(double y);

int main()
{
	double y,eq;
	cout << "Choose a value for y:";
	cin >> y;
	eq = equation(y);
	cout << "2 * (2 * y + 5) / (14 - y / 3)=" << eq;

	return 0;
}
double equation(double y)
{
	return 2 * (2 * y + 5) / (14 - y / 3);
}