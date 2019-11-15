#include <iostream>
using namespace std;
unsigned short lice(unsigned short a, unsigned short b);

int main()
{
	unsigned short a, b;
	cout << "strana =";
	cin >> a;
	cout << "viso4ina =";
	cin >> b;
	cout << "lice =" << lice(a, b) << endl;
	return 0;
}
unsigned short lice(unsigned short a, unsigned short b)
{
	return (a * b)/2;
}