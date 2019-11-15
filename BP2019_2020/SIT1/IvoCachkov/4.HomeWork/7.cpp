#include <iostream>
using namespace std;

int pog(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);

int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	cout << "Enter 10 numbers - " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cin >> g;
	cin >> h;
	cin >> i;
	cin >> j;

	int positive = 10 - pog(a, b, c, d, e, f, g, h, i, j);
	cout << "positive numbers - " << positive << " broq" << endl;
	cout << "negative numbers - " << pog(a, b, c, d, e, f, g, h, i, j) << " broq" << endl;

	return 0;
}
int pog(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
{
	int negative = 0;
	if (a < 0)
	{
		negative++;
	}
	if (b < 0)
	{
		negative++;
	}
	if (c < 0)
	{
		negative++;
	}
	if (d < 0)
	{
		negative++;
	}
	if (e < 0)
	{
		negative++;
	}
	if (f < 0)
	{
		negative++;
	}
	if (g < 0)
	{
		negative++;
	}
	if (h < 0)
	{
		negative++;
	}
	if (i < 0)
	{
		negative++;
	}
	if (j < 0)
	{
		negative++;
	}
	return negative;
}