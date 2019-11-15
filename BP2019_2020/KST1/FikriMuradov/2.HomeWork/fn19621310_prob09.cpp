#include <iostream>
using namespace std;

double strani(double a, double b, double c)
{
	return a + b + c;
}

struct triagalnik
{
	double a, b, c;
};

int main()
{
	triagalnik A;
	cout << "Vuvedete strana a na triagalnika: ";
	cin >> A.a;
	cout << "Vuvedete strana b na triagalnika: ";
	cin >> A.b;
	cout << "Vuvedete strana c na triagalnika: ";
	cin >> A.c;

	cout << "Obikolkata na triugulnika e " << strani(A.a, A.b, A.c) << endl;
}
