#include <iostream>
using namespace std;

struct Pravoagalnik
{
	float a, b;
	float lice;
} ABCD;


float lice(float S)
{
	Pravoagalnik ABCD;
	cout << "Vavedi stoynosti za strani na pravoagalnik" << endl;
	cout << "Strana1 = Strana3 =";
	cin >> ABCD.a;
	cout << "Strana2 = Strana4 =";
	cin >> ABCD.b;
	ABCD.lice = ABCD.a * ABCD.b;
	S = ABCD.lice;
	cout << "S = " << S << endl;
	return S;
}

int main()
{
	float a;
	a = lice('S');
	return 0;
}