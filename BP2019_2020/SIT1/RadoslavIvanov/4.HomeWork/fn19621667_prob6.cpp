#include <iostream>
using namespace std;

void X(int n);
void Y(int n);
void Z(int n);

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
	cout << endl;
	Y(n);
	cout << endl;
	Z(n);
	return 0;
}

void X(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << endl;
		for (int j = n - i+1; j > 0; j--) {
			cout << '%';
		}
	}
}

void Y(int n)
{
	for (int i = 1; i <= n/2; i++)
	{
		cout << endl;
		for (int j = 1; j <= i; j++)
		{
			cout << '%';
		}
	}
	for (int i = n/2+1; i <= n; i++)
	{
		cout << endl;
		for (int j = n - i + 1; j > 0; j--) {
			cout << '%';
		}
	}
}

void Z(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << endl;
		for (int k = 0; k < i;k++)
		{
			cout << ' ';
		}
		for (int j = n - i + 1; j > 0; j--)
		{
			cout << "%%";
		}
	}
}