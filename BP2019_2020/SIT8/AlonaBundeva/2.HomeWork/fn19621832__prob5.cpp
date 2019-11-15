#include <iostream>
using namespace std;
int show(int a, int b, int c, int d);

int main()
{
	int a,b,c,d,x;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	cout << "x="<<x<<endl;
	x = (a + b + c + d) / 4;

	return 0;
}