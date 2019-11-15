#include <iostream>
using namespace std;

double CalculateExpression(double x);

int main()
{
	double x;
	cout << "Enter x= ";
	cin >> x;
	cout << "x = " << CalculateExpression(x) << endl;

	system("Pause");
	return 0;
}

double CalculateExpression(double x)
{
	if (x > 5)
	{
		return 2 * (2 * x + 5) / (14 - x / 3);
	}
	else
	{
		return 0;
	}

}