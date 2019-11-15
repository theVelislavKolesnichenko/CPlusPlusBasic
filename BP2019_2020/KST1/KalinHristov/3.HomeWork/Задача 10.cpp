#include <iostream>
using namespace std;
int stava(int a)
{
	if (a % 2 == 0)
	{
		return 1;
	}
	else return 0;
}
int main()
{
	int a;
	cout << "Proverqvame dali edno chislo e chetno ili ne a=";
	cin >> a;
	if (stava(a) == 1)
	{
		cout << "Even";
	}
	else cout << "Odd";
}