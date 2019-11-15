#include <iostream>
using namespace std;
int chisla(int a, int b);
int main()
{
	int a, b;
	cout << "Vuvedete chisloto a="; cin >> a;
	cout << "Vuvedete chisloto b="; cin >> b;
	cout << "Po golqmoto chislo e " << chisla(a, b);
	return 0;
}
int chisla(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}