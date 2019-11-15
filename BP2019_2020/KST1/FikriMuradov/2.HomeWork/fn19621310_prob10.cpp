#include <iostream>
using namespace std;

double strani(double a, double b)
{
	return a * b;
}

struct pravougulnik
{
	double a, b;
};

int main()
{
	pravougulnik A;
	cout << "Vuvedete strana a na pravougulnika: ";
	cin >> A.a;
	cout << "Vuvedete strana b na pravougulnika: ";
	cin >> A.b;
	

	cout << "Obikolkata na pravougulnika e " << strani(A.a, A.b) << endl;
}
