#include<iostream>
using namespace std;
int fun(int x);
int main()
{
	int x;
	cout << "Vuvedi chislo "; cin >> x;
	cout << fun(x);
	return 0;
}
int fun(int x)
{
	if (x % 2 == 0)
	{
		cout << "Even ";
	}
	else
	{
		cout << "Odd ";
	}
	{
		return x;
	}
}
