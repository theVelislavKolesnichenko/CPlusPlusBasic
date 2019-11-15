#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, y;
	cout << " Choose a number for y=";
	cin >> y;
	{
		if (y >= 58 && y <= 87)
		{
			x = pow(y, 3) + (y * 4 + 2 * y);
		}
		else (y >= 15 && y <= 58);
		{
			x = 2 * (2 * y + 5) / (14 - y / 3);
		}
		cout << x << endl;
		cin >> x;
	}
	
}