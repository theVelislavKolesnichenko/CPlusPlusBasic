#include <iostream>
using namespace std;

int main()
{
	int a, b, c, x;
	x = 576;

	a = x % 10;
	b = x / 10 % 10;
	c = x / 100;

	cout << "Units: " << a << endl;
	cout << "Tens: " << b << endl;
	cout << "Hundreds: " << c << endl;
	
	
	return 0;
}
