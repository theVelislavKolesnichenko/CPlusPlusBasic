#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double y;
	cout << "Въведете число: " << endl;
	cin >> y;
	double x;
	x = 2 * (2 * y + 5) / (14 - y / 3);
	cout << x;
	return x;
}