#include <iostream>
#include <math.h>
using namespace std;
float equ(float y);
int main()
{
	float x1, x2, y;
	cout << "y= ";
	cin >> y;
	x1 = pow(y, 3) + (pow(y, 4) + 2 * y);
	x2 = 2 * ((2 * y + 5) / (14 - y / 3));
	if (y <= -5)
		cout << "Result= " << x1;
	else 
		cout << "Result= " << x2;
	return 0;
}
float equ(float y)
{
	return 0;
}