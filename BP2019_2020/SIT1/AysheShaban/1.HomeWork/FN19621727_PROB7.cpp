#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a,c,y;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	y = sqrt(a + 2) - pow(c, 2);
	cout << "y=" << y;
	return 0;
}