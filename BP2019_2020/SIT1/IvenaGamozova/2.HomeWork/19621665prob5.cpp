#include<iostream>
using namespace std;
int Ded(int a, int b)
{
	int d;
	d = a - b;
	return d;
}
int main()
{
	int d1, d2;
	int x, a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	d1 = a - b;
	d2 = b - a;
	x = 2 *(d1 / d2);
	cout << "x="<<d1/d2 << endl;
	return 0;
}