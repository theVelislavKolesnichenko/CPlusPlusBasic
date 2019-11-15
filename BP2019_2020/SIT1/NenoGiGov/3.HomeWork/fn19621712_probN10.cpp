#include <iostream>
using namespace std;

void f(int a);
int main()
{
	int a;
	cout << "a=";
	cin >> a;
	f(a);

	return 0;
}
void f(int a)
{
	if (a % 2 == 0)
	{
		cout << "Even";
	}
	else
	{
		cout << "Odd";
	}
}