#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, c, y;

	cout << "Vyvedete a =" << endl;
	cin >> a;
	cout << "Vyvedete c =" << endl;
	cin >> c;
	
	y = sqrt(a-2) - pow(c,2);
	cout << "y = " << y << endl;


	return 0;
}