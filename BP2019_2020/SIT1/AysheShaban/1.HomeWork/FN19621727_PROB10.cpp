#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, b, P, S;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	P = 2 * (a + b);
	cout << "P=" << P << endl;
	S = a * b;
	cout << "S=" << S << endl;
	return 0;
}