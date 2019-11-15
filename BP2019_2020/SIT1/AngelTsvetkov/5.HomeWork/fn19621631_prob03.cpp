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
	if (x < 0)
	{
		result = sqrt(pow(x, 2) + 1);
			return result;
}
	else if ((x >= 0)&&(x!=20))
	{
		result = (x+10)/(x-20);
		return result;
	}
	else {
		cout << "Cant divide by 0." << endl;
	}
}