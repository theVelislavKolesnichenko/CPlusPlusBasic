#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	cin >> a;
	b = a % 10;
	cout <<"Units"<< ' ' << b << ' ';
	c = (a % 100)/10;
	cout << "Tens" << ' '<< c << ' ';
	d = a / 100;
	cout << "Hundreds" << ' ' << d;
	return 0;
}