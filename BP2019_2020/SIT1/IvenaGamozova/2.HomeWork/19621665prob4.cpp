#include<iostream>
using namespace std;
int main()
{
	double e, d, st;
	int x = 837;
	cout << "x=837" << endl;
	e = x % 10;
	d = (x / 10) % 10;
	st = (x / 100) % 10;
	cout << "e=7" << "," << "d=3" << "," << "st=8" << endl;
	return 0;
}