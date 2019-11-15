#include <iostream>
using namespace std;

int NOK(int a, int b);
int NOD(int a, int b);

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << "NOK:" << NOK(a, b) << endl;
	cout << "NOD:" << NOD(a, b) << endl;
	return 0;
}

int NOK(int a, int b)
{
	for (int i = 2;; i++)
	{
		if ((a % i) == 0 && (b % i) == 0)
		{
			return i;
			break;
		}
	}
}

int NOD(int a, int b)
{
	int i;
	if (a > b)i = a;
	else i = b;
	for (i; i >= 2; i--)
	{
		if ((a % i) == 0 && (b % i) == 0)
		{
			return i;
			break;
		}
	}
}