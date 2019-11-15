#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b, c, z;

	cout << "Vyvedete a =" << endl;
	cin >> a;
	cout << "Vyvedete b =" << endl;
	cin >> b;
	cout << "Vyvedete c =" << endl;
	cin >> c;

	z = 2 * (a - b) * (a - c);
	cout << "z = " << z << endl;

	
	return 0;
}