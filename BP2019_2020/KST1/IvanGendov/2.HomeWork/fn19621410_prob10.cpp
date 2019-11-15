#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int s(int a, int b);//tazi funciq shte izchisli liceto na pravougulnika
struct pravougulnik//tazi struktora e za stranite na pravougulnika 
{
	int a, b;
};
int main()
{
	pravougulnik A;
		cout << "Vuvedete ednata strana na pravougulnika a=";
		cin >> A.a;
		cout << "Vuvedete vtorata strana na pravougulnika b=";
		cin >> A.b;
		cout << "Liceto na pravougulnika e S=" << s(A.a,A.b);
	
	return 0;
}
int s(int a, int b)
{
	return a * b;
}