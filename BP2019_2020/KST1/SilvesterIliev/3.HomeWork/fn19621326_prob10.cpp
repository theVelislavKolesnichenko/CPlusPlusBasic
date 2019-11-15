#include <iostream>
using namespace std;

void funct1(int a);

int main()
{
	while (true)
	{
		int a;
		cout << "Въведете число ";
		cin >> a;
		funct1(a);
	}
	return 0;
}

void funct1(int a)
{
	if (a % 2 == 0)
	{
		cout << "Even" << endl;
	}
	else
	{
		cout << "Odd" << endl;
	}
}