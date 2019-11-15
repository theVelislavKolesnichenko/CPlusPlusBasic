#include <iostream>
#include <math.h>
using namespace std;
int  c, y, b;
double a;

int main()
{
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	b = (a + 2)-c*2;
	y = sqrt(b);
	cout << "y="<<y << endl;
	return 0;

}