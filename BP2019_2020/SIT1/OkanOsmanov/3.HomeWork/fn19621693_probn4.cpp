# include <iostream>
using namespace std;
double x(double y);
int main()
{
	double y;
	cout << "vivedete stoynost:\n";
	cin >> y;
	cout << "x=" << x(y);
}
double x(double y)
{
	double x;
	if (y != 0)
	{
		x = 20 / y;
		return x;
	}
	else
	{
		cout << "ne se deli na 0";
	}
}