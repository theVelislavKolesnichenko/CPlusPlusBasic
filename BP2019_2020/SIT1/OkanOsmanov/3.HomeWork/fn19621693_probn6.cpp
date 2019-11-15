#include <iostream>
#include <math.h>
using namespace std;
float x(float y);
int main()
{
	float y;
	cout << "vivedi cislo:\n";
	cin >> y;
	cout << "x=" << x(y);
}
float x(float y)
{
	float x;
	if (y >= 58 && y <= 87)
	{
		return x = pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else if (y > 15 && y < 58)
	{
		return x = 2 * (2 * y + 5) / (14 - y / 3);
	}
}