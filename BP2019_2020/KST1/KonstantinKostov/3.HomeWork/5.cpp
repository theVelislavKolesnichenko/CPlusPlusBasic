#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int y;
	cout << "Въведете число: " << endl;
	cin >> y;
	
		if (y < 1)
		{
			
		int x = y ^ 3 + (y ^ 4 + 2 * y);
		cout << x;
	}
	
		else if (y > 1)
		{
			
		int x = 2 * (2 * y + 5) / (14 - y / 3);
		cout << x;
	}
	
	return 0;
}