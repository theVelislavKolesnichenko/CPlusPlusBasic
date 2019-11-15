#include <iostream>
using namespace std;

double f(double y);

int main()
{
	double y;
	cout << "y = ";
	cin >> y;
	cout << "x = y/20 = " << f(y) << endl;

	return 0;
}
double f(double y) 
{
	if (y == 0) 
	{
		cout << "cannot be devided by 0" << endl;
		return 0;
	}
	else
	{
		return 20 / y;
	}
}
