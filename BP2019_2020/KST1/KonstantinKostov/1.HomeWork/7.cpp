#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, c;
	cout << "Въведете а:" << endl;
	cin >> a;
	cout << "Въведете c:" << endl;
	cin >> c;
	double y;
	y = sqrt(a + 2) - c * 2;
	cout << "y=" << y;
	return 0;
}