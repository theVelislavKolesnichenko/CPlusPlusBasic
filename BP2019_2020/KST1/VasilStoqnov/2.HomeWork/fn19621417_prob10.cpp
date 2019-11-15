#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int lice(int a, int b);    //funkciq


struct pravougulnik    //struktura
{
	int a, b;
};
int main()
{
	pravougulnik A;
	cout << "Vuvedete strana na pravougulnika a=";
	cin >> A.a;
	cout << "Vuvedete vtora strana na pravougulnika b=";
	cin >> A.b;
	cout << "Liceto na pravougulnika e S=" << lice(A.a, A.b);

	return 0;
}
int lice(int a, int b)
{
	return a * b;
}