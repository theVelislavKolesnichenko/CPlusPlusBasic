#include <iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	double d;
	d = (double)(a + b + c) / 2;
	cout << "d=" << d << endl;
	return 0;
}