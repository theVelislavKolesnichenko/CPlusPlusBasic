#include <iostream>
#include <math.h>
using namespace std;
double result1(double y);
double result2(double y);
int main()
{
	double y;
	cout << "y= ";
	cin >> y;
	if (y < 1)
		cout << "x= " << result1(y);
	else if (y > 1)
		cout << "x= " << result2(y);
}
double result1(double y) {
	return(pow(y, 3) + pow(y, 4) + 2 * y);
}
double result2(double y)
{
	return(2 * (2 * y + 5) / (14 - y / 3));
}