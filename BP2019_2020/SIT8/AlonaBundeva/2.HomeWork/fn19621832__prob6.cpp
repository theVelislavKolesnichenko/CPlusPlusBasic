#include<iostream>
#include<math.h>
using namespace std;

int show(int a, int b);

int main()
{
	int a, b, x;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	x = show(a, b);

	cout << x << endl;

	return 0;
}

int show(int a, int b)
{
	int x;
	cout << "x =(a+b)³ + (a² + 2ba - 2ab + b²)=";
	x = powl((a+b),3) + (powl(a, 3) + (2 * b * a) - (2 * a * b) + powl(b, 2));

	return x;
}