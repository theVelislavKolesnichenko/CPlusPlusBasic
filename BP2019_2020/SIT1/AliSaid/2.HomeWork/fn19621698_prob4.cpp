#include <iostream>
using namespace std;

double Find_X(double y);

int main()
{
	double y;
	cout << "Enter digit:\n";
	cin >> y;
	cout << "x= " << Find_X(y);
}

double Find_X(double y)
{
	double x;
	if (y != 0)
	{
		x = 20 / y;
		return x;
	}
	else
	{
		cout << "Cannot divide by 0";
	}
}