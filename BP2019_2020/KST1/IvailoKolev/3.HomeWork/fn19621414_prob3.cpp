#include <iostream>
using namespace std;
int fun(int a);
int main()
{
	int a;
	cout << "a=";
	cin >> a;
	cout << fun(a);
	return 0;
}
int fun(int a)
{
	if (a > 0)
	{
		cout << "positive ";
	}
	else
	{

		cout << "negative ";
	}
	{
		return a;
	}
}