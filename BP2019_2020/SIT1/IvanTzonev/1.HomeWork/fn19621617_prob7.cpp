#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	int a, c, y;
	cout << "Въведете a=" << endl;
	cin >> a;
	cout << "Въведете c=" << endl;
	cin >> c;
	y = sqrt(a + 2) - (__int64)c * 2;
	cout << "y = √(a + 2)-c*2" << " \n y=" << y;
return 0;
}