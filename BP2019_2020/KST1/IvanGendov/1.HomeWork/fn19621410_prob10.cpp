#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	int a, b, s, p;//"a" i "b" sa stranite na pravougulnika "s" e liceto i "p" e obikolkata mu
	cout << "Vuvedete stoinost za stranata a=";
	cin >> a;
	cout <<endl<< "Vuvedete stoinost za stranata b=";
	cin >> b;
	s = a * b;
	p = 2 * a + 2 * b;
	cout << "Obikolkata na pravougulnika e " << p << "\nLiceto na pravougulnika e " << s;
	return 0;
}