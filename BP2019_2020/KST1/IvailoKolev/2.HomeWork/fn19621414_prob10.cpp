#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int s(int a, int b);
struct pravougulnik
{
	int a, b;
};
int main()
{
	pravougulnik A;
	cout << "Vuvedete stranata a "; cin >> A.a;
	cout << "Vuvedete stranata b "; cin >> A.b;
	cout << "Liceto na pravougulnika e " << s(A.a, A.b);

	return 0;
}
int s(int a, int b)
{
	return a * b;
}