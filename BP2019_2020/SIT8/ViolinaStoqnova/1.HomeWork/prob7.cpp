#include <iostream>
#include <math.h>
using namespace std;
#define SUM (a,b) (a+b)
int main()
{
	int a, c, y;
	cout << "Choose A=" << endl;
	cin >> a;
	cout << "Choose C=" << endl;
	cin >> c;

	y = sqrt(a + 2) - c * 2;
	cout << "y=" << y << endl;
	return 0;

}
