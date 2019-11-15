#include<iostream>
using namespace std;

int funct1(int a, int b);

int main()
{
	int a;
	int b;
	cout << "Въведи стойност за а=" ;
	cin >> a;
	cout << endl << "Въведи стойност за b=";
	cin >> b;
	cout << funct1(a, b);
	return 0;
}
int funct1(int a, int b)
{
	if (a > b)
	{
		cout << "Числото а е по-голямо";
		return a;
	}
	else if (a < b)
	{
		cout << "Числото b е по-голямо";
		return b;
	}
	else
	{
		cout << "Равни са" << endl;
			return 0;
	}

}