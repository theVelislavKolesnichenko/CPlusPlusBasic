#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, y;
	cout << "Vyvedete y = ";
	cin >> y;
	x = (2 * y + 5) / (14 - y / 3);
	cout << "X = " << x;
	return 0;	
}