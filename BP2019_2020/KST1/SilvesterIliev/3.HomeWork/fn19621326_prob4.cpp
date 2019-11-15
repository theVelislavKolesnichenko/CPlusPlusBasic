#include <iostream>
#include <math.h>
using namespace std;

double funct1(double y);

int main()
{
	double y;
	cout << "Въведете стойност за y " ;
	cin >> y;
	funct1(y);
	return 0;
}
double funct1(double y)
{
	if (y == 0)
	{
		cout << "Не може да се дели на 0" << endl;
		return 0;
	}
	else
	{
		double x = 20 / y;
		cout << "Резултатът е " << x << endl;
		return x;
	}
}