#include <iostream>
using namespace std;

struct Triangel
{
	double a, b, c;
	double perimetar;
} ABC;


double obikolka(double P)
{
	Triangel ABC;
	cout << "Vavedi stoynosti za stranite na triagalnik" << endl;
	cout << "Strana1 = ";
	cin >> ABC.a;
	cout << "Strana2 = ";
	cin >> ABC.b;
	cout << "Strana3 = ";
	cin >> ABC.c;
	ABC.perimetar = ABC.a + ABC.b + ABC.c;
	P = ABC.perimetar;
	cout << "Obikolka = " << P << endl;
	return P;
}
int main()
{
	double a;

	a = obikolka('P');
	return 0;
}
