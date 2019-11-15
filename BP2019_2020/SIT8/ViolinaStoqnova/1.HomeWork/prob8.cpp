#include <iostream>
#include <math.h>
using namespace std;
#define SUM(a,b) (a+b)
#define SUB(a,b) (a-b)
int main()
{
	int x, y;
	cout << "Choose Y=" << endl;
	cin >> y;
	
	x = (2 * y + 5) / (14 - y / 3);
	
	cout << "x=" << x << endl;

	return 0;


}

