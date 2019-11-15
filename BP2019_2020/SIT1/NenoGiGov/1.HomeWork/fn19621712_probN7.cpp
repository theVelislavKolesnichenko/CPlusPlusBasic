#include <iostream>
#include <math.h>
using namespace std;
double funk(double a,double c);
int main()
{
	double a, c;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	cout << "y=" << funk(a,c) << endl;

	return 0;
}
	double funk(double a, double c)
	{
	return sqrt(a+2)-pow(c,2);
}