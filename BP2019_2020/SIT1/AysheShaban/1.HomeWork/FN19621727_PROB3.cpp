#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	a = 576;
	cout << a << endl;
	b = a / 100;
	c = (a / 10) % 10;
	d = a % 10;
	cout << "Units" << d;
	cout << "Tens" << c;
	cout << "Hundreds" << b;
	return 0;
}