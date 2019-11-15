#include <iostream>
using namespace std;
int proverka(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);
int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	cout << "Vuvedi 10 chisla : " << endl;
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
	int positive = 10 - proverka(a, b, c, d, e, f, g, h, i, j);
	cout << "otricatelnite chisla sa : " << proverka(a, b, c, d, e, f, g, h, i, j) << "na broi" << endl;
	cout << "polojitelnite chisla sa : " << positive << "na broi" << endl;
}
int proverka(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
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