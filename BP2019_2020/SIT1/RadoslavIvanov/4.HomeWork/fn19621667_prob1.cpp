#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void Y(double a, double c);

int main()
{
	while (true)
	{
		double a, c;
		cout << "a=";
		cin >> a;
		cout << "c=";
		cin >> c;
		Y(a, c);
	} 
	return 0;
}

void Y(double a, double c)
{
	double y = sqrt(a + 2) - 2 / c;
	if ((a + 2) > 0 && c != 0) cout << "y=" << y << endl;
	else cout << "invalid input" << endl;
}