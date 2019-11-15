#include <iostream>
#include<algorithm>

using namespace std;

int NOK(int a, int b);
int NOD(int a, int b);


int main()
{
	int a, b;

	cout << "Enter two numbers: " << endl;
	cin >> a >> b;

	cout << "NOK: " << NOK(a, b) << endl;
	cout << "NOD: " << NOD(a, b) << endl;

	return 0;
}

int NOK(int a, int b)
{
	for (int i = max(a, b); i <= (int)a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			return i;
		}
	}
}

int NOD(int a, int b)
{
	for (int i = min(a, b); i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			return i;
		}
	}
}
