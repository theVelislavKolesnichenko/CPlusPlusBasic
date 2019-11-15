#include <iostream>
using namespace std;

double CalculateExpression(int y);

int main()
{
	int y;
	cout << "Enter y = ";
	cin >> y;
	cout << "x = " << CalculateExpression(y) << endl;

	system("Pause");
	return 0;
}

double CalculateExpression(int y)
{
	if (y > 1)
	{
		return 2 * (2 * y + 5) / (14 - y / 3);
	}
	else
	{
		return 0;
	}
}