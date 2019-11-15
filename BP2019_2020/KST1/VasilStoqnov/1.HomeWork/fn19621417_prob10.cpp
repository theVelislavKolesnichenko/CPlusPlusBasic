#include <iostream>
using namespace std;

int main()
{
	int lice, strana_a, strana_b,obikolka;

	cout << "vavedi strani na pravougulnik:";
	cin >> strana_a >> strana_b;

	lice = strana_a * strana_b;
	obikolka = 2 * strana_a + 2 * strana_b;

	cout << "lice=: " << lice << endl;
	cout << "obikolka=" << obikolka << endl;
	return 0;
}