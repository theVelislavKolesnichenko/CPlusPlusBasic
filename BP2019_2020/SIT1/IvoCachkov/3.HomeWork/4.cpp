#include <iostream>
using namespace std;

double calculatingy(double y);

int main()
{
	double y;
	cout << "Enter y = ";
	cin >> y;
	cout << "x = " << calculatingy(y) << endl;

	system("Pause");
	return 0;
}

double calculatingy(double y)
{
	if (y == 0)
	{
		cout << "it's not divisible by 0" << endl;
	}
	else
	{
		return 20 / y;
	}
}