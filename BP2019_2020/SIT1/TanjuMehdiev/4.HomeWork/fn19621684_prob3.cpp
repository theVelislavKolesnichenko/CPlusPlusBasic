#include <iostream>
#include <math.h>
using namespace std;
int nok(int a, int b);
int nod(int a, int b);

int main()
{
	int a, b;
	cout << "Vyvedete chislo:";
	cin >> a;
	cout << "Vyvedete chislo:";
	cin >> b;
	cout << "Nay-golemiqt obsht delitel na a i b e:" << nod(a, b) << endl;
	cout << "Nay-golqmoto obshto kratno na a i b e:" << nok(a, b) << endl;

	return 0;
}
int nod(int a, int b)
{
	for (int i = 0; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			return i;
		}
	}
}
int nok(int a, int b)
{
	for (int i = 0; i <= (int)a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			return i;
		}
	}
}