#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int p(int a, int b, int c);
struct triugulnik
{
	int a, b, c;
};
int main()
{
	triugulnik A;
	cout << "Vuvedete stranata a "; cin >> A.a;
	cout << "Vuvedete stranata b "; cin >> A.b;
	cout << "Vuvedete stranata c "; cin >> A.c;
	if (A.a == A.b == A.c)
		cout << "Perimeturut na ravnostranniq triugulnik e: " <<p(A.a, A.b, A.c);
	else
		if (A.a == A.b || A.b == A.c || A.a == A.c)
			cout << "Perimeturut na ravnobedreniq triugulnik e: " <<p(A.a, A.b, A.c);
		else
			cout << "Perimeturut na raznostranniq triugulnik e: " <<p(A.a, A.b, A.c);
	return 0;
}
int p(int a, int b, int c)
{
	return a + b + c;
}