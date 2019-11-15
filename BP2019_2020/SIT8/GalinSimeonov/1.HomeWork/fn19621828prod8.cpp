#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int y = 9;
	int x;
	cout << "y=" << y << endl;
	cout << "x=(2*y+5)/(14-y/3)" << endl;
	x = (2 * y + 5) / (14 - y / 3);
	cout << "x=" << x << endl;
	return 0;

}