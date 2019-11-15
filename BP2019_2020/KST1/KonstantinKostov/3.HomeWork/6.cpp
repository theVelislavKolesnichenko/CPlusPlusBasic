#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int y;
	cout << "Въведете число: " << endl;
		cin >> y;
		int x;
		if (y >= 58 && y <= 87)
		{
			x = y ^ 3 + (y ^ 4 + 2 * y);
			cout << "x= " << x;
		}
		else if (y > 15 && y < 58)
		{
			x = 2 * (2 * y + 5) / (14 - y / 3);
			cout << "x= " << x;
		}
		return 0;

}