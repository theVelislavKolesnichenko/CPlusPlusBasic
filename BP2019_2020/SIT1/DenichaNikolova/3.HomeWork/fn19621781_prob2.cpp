#include <iostream>
using namespace std;

void bigger(int x, int y);

int main()
{
	int a, b;

	cin >> a >> b;

	bigger(a, b);
	
	return 0;
}

void bigger(int x, int y)
{
	if (x > y)
	{
		cout << x << endl;
	}
	if (y > x)
	{
		cout << y << endl;
	}
}