#include <iostream>
using namespace std;
int positive(int a);
int main()
{
	int a;
	cout << "Vuvedete edno chislo "; cin >> a;
	cout << positive(a);
	return 0;
}
int positive(int a)
{
	if (a > 0)
	{
		cout<<"Chisloto e polojitelno a=";
	}
	else
	{
		cout << "Chisloto e otricatelno a=";
	}
	{
		return a;
	}
}