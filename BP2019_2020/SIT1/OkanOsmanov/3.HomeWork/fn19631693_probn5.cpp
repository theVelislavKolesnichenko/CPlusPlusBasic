# include <iostream>
#include <cmath>
using namespace std;
float x(float y);
int main()
{
	float y;
	cout << "vivedete cislo:\n";
	cin >> y;
	cout << "x=" << x(y);
}
float x(float y)
{
	float x;
	if (y < 1)
	{
		return x = pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else if(y>1)
	{
		return x = 2 * (2 * y + 5) / (14 - y/3);
	}
}