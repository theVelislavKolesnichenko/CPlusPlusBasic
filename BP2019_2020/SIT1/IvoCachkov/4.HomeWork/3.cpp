#include <iostream>
using namespace std;

int calcnok(int a, int b);
int calcnod(int c, int d);

int main()
{
	int a, b, c, d;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "NOK - " << calcnok(a, b) << endl;

	cout << "Enter c = ";
	cin >> c;
	cout << "Enter value d = ";
	cin >> d;
	cout << "NOD - " << calcnod(c, d) << endl;

	system("Pause");
	return 0;
}

int calcnok(int a, int b)
{
	int s;
	if (a > b)
	{
		s = (a * b) / calcnod(a, b);
		return s;
	}
	else if (b > a)
	{
		s = (a * b) / calcnod(a, b);
		return s;
	}
}

int calcnod(int c, int d)
{
	int p;
	if (c == 0)
	{
		return d;
	}
	else if (d == 0)
	{
		return c;
	}
	else if ((c > d) && (c != 0) && (d != 0))
	{
		p = c % d;
		if (p == 0)
		{
			return d;
		}
		else {
			return p;
		}
	}
	else if ((d > c) && (c != 0) && (d != 0))
	{
		p = d % c;
		if (p == 0)
		{
			return c;
		}
		else {
			return p;
		}
	}
}