#include <iostream>
using namespace std;
double par(char ch)
{
	double y;
	cout << ch << " = ";
	cin >> y;
	return y;
}
double total(double y);

int main()
{
	double y, x;
	y = par('y');
	x = total(y);
	cout << "The total is: " << x << endl;
	return 0;
}
double total(double y)
{
	double result;
	result = 2*(2*y+5) / (14-y/3) ;
	return result;
}
