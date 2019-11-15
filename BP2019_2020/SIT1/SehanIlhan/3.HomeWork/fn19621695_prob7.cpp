#include <iostream>
#include <math.h>
using namespace std;

float find_x(float y);

int main()
{
	float y;
	cout << "Enter digit:\n";
	cin >> y;
	cout << "x=" << find_x(y);
}

float find_x(float y)
{
	float x;
	if (y <= -5)
	{
		return x = pow(y, 3) + (pow(y, 4) + 2 * y);
	}
	else if (y > 5)
	{
		return x = 2 * (2 * y + 5) / (14 - y / 3);
	}


}