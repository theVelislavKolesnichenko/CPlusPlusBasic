#include <iostream>
using namespace std;
int golemina(int a, int b);
int main()
{
	int a, b;
	cout << "Vuvedete chisloto a="; cin >> a;
	cout << "Vuvedete chisloto b="; cin >> b;
	cout << "Po golqmoto chislo e " << golemina(a, b);
	return 0;
}
int golemina(int a, int b)
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