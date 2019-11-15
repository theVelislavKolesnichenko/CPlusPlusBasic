#include <iostream>
#include <math.h>
using namespace std;
double Y(double a, double c);
int main()
{
	double a, c;
	cout << "a= ";
	cin >> a;
	cout << "c= ";
	cin >> c;
	cout << "y= " << Y(a, c) << endl;
	
return 0;
}
double Y(double a, double c)
{
	if ((a < 0) || (c == 0)) 
	{
		cout << "Invalid Input ";
		return 0;
	}

	double y;
	return y = sqrt(a + 2) - 2 / c;
	return y;
}