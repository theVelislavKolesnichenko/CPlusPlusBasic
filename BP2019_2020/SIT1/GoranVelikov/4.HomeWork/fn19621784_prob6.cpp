#include <iostream>
#include <cmath>
using namespace std;
int funct(int a)
{
	for (int i = a; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "%";
		}
		cout << endl;
	}
	return a;
}
int funct1(int a)
{
	if (a % 2 == 0) 
	{
	for (int i = 1; i <= a/2; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << "%";
			}
			cout << endl;
		}
	}
	else 
	{
		for (int i = 1; i <= a / 2+1; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << "%";
			}
			cout << endl;
		}
	}
	for (int i = a/2; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "%";
		}
		cout << endl;
	}
	return a;
}
int funct2(int a)
{
	for (int i = a; i >= 1; --i)
	{
		for (int j = 0; j < a - i; ++j)
			cout << " ";
		for (int j = i; j <= 2*i; ++j)
			cout << "%";
		for (int j = 0; j < i - 1; ++j)
			cout << "%";
		cout << endl;
	}
	return a;
}

int main()
{
	int a;
	cin >> a;//при вкарването на стойности напишете "5" за решене на задачата
	cout << funct(a) << endl;
	cout << funct1(a) << endl;
	cout << funct2(a) << endl;
	return 0;
}