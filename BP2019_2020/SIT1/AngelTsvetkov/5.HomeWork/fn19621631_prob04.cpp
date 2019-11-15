#include <iostream>
#include <math.h>
using namespace std;
double uravnenie(double x);
int main()
{
	double x;
	cout << "x = ";
	cin >> x;
	while ((x >= -100) && (x <= 100))
	{
		cout << uravnenie(x) << endl;
		break;
	}
	return 0;
}
double uravnenie(double x)
{
	double result;
	if (x <= 0)
	{
		result = sqrt(pow(x, 3)/4 + 1);
		return result;
	}
	else if ((x > 0) && (x != 1) && (x != 2) && (x !=3))
	{
		result = sqrt(x-4);
		return result;
	}
	else {
		cout << "Cant root a negative." << endl;
	}
}