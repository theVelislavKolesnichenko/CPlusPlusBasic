#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	unsigned long a, b, P, S;
	cout << "Vyvedete a = ";
	cin >> a;
	cout << "Vyvedete b = ";
	cin >> b;
	P = 2 * (a + b);
	S = a * b;
	cout << "P = " << P << endl;
	cout << "S = " << S;
		return 0;
}