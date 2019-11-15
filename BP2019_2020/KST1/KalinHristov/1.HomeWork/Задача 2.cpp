#include <iostream>
#include <math.h>
using namespace std; 


int main()
{
	int a, b, c;
	cout << "Vuvedete A:" << endl;
	cin >> a;
	cout << "Vuvedete B:" << endl;
	cin >> b;
	cout << "Vuvedete C:" << endl;
	cin >> c;
	double a1 = a;
	double b1 = b;
	double c1 = c;
	double D = (a1 + b1 + c1) / 3;
	cout << "Izvejdame sredno aritmetichnoto na 3-te chisla:" << D;
	return 0;
}
