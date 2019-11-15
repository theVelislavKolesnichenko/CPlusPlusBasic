#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double y;
	cout << "Въведете y:" << endl;
	cin >> y;
	double x;
	x = (2 * y + 5) / (14 - y / 3);
	cout << "x=" << x;
	return 0;
}