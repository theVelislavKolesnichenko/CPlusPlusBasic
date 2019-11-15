#include <iostream>
#include <cmath>
using namespace std;

float funct(int y)
{
	float x;
	if (y < 1)
	{
		x = pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else if (y > 1)
	{
		x = 2 * (2 * y + 5) / (14 - y / 3);
	}
	return x;
}
int main()
{
	int y;
	cin >> y;
	cout << funct(y);
	return 0;
}