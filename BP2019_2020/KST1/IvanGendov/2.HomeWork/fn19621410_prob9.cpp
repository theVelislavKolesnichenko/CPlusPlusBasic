#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int p(int a, int b, int c);//tazi funkciq shte q izpolzvam da presmetne obikolkata na triugulnika 
struct tri//tri=triugulnik
{
	int a, b, c;//stranite na triugulnika v struktorata 
};
int main()
{
	tri A;
		cout << "Vuvedete ednata strana na triugulnika a=";
		cin >> A.a;
		cout << "Vuvedete vtorata strana na triugulnika b=";
		cin >> A.b;
		cout << "Vuvedete tretata strana na triugulnika c=";
		cin >> A.c;
		if (A.a == A.b == A.c)
			cout << "Obikolkata na ravnostraniq triugulnik e P=" << p(A.a, A.b, A.c);
		else if (A.a == A.b || A.b == A.c || A.a == A.c)
				cout << "Obikolkata na ravnobedreniq trigulnik e P=" << p(A.a, A.b, A.c);
		else 
				cout << "Obikolkata na raznostranniq trigulnik e P=" << p(A.a, A.b, A.c);

	return 0;
}
int p(int a, int b, int c)
{
	return a + b + c;//formulata za obikolka na trigulnik 
}