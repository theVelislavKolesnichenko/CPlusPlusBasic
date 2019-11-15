#include <iostream>
using namespace std;
double delenie(double y);
int main()
{
	double y;
	cout << "y= ";
	cin >> y;
	double x = delenie(y);
	if (y == 0)
	{
		cout << "You cant divide by zero." << endl;
	}
	else
	{
		cout <<"x = "<< x << endl;
	}
	return 0;
}
double delenie(double y)
{
	double result = (20 / y);
	return result;
}