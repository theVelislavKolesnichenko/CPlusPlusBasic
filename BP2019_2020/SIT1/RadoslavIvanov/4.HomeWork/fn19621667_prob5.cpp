#include <iostream>
using namespace std;

void X(int n);

int main()
{
	int n;
	do
	{
		cout << "\nN=";
		cin >> n;
		if (n < 0)cout << "\nInvalid number!";
	} while (n < 1);
	X(n);
	return 0;
}

void X(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << " " << i;
	}
}