#include <iostream>
using namespace std;

double calcint(double x)
{
	if (x > 15 && x < 58)
	{
		return 2 * (2 * x + 5) / (14 - x / 3);
	}
	else
	{
		return 0;
	}
}

int main()
{
	double x;
	cout << "Please insert value y = ";
	cin >> x;
	cout << "x = " << calcint(x) << endl;

	system("Pause");
	return 0;
}