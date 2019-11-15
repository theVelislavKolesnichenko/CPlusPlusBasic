#include <iostream>
using namespace std;
int main()
{
	int a = 120;
	int b = 150;
	
	cout << ~b << endl;
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	cout << (a ^ b) << endl;

	int c = a << 5;

	cout << c << endl;

	int d = b >> 4;

	cout << d << endl;

	return 0;
}
