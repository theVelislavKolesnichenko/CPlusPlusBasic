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
	if (y >= 58 && y <= 87)
		cout << "Result= " << x1;
	else if (y > 15 && y < 58)
		cout << "Result= " << x2;
	else
		cout << "Not a valid number!";
	return 0;
}
float equ(float y)
{
	return 0;
}