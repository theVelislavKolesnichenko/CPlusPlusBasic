#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c, C3;
	cout << "Vuvedete 3-cifreno chislo:";
	cin >> C3;
	a = C3 % 10;
	b = C3 / 10 % 10;
	c = C3 / 100;
	cout << "Units:" << a <<  endl << "Tens:" << b << endl << "Hundreds:" << c << endl;
	return 0;
}