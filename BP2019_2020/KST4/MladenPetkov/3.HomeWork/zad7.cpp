#include<iostream>
using namespace std;

int asd(int y);

int main()
{
	int y;
	cout << "y=";
	cin >> y;
	cout << "x=" << asd(y) << endl;
	return 0;
}
int asd(int y)
{
	if (y<=-5)
	{
		int x;
		x = pow(y, 3) + (pow(y, 2) + 2 * y);
		return x;
	}
	else if (y>5)
	{
		int x;
		x = 2 * (2 * y + 5) / (14 - y / 3);
		return x;
	}
}