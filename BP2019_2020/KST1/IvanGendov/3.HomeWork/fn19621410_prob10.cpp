#include <iostream>
using namespace std;
int chisla(int a);
int main()
{
	int a;
	cout << "Vuvedete edno chislo "; cin >> a;
	cout << chisla(a);
	return 0;
}
int chisla(int a)
{
	if (a % 2 == 0)
	cout << "Chisloto e chetno a=";
	else
	cout << "Chisloto e nechetno a=";
	return a;
}
