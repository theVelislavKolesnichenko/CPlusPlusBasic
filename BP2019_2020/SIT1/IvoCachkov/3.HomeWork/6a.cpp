#include <iostream>
using namespace std;

double calcint(double x)
{
	if (x >= 58 && x <= 87)
	{
		return pow(x, 3) + (pow(x, 4) + 2 * x);
	}
	else
	{
		return 0;
	}
}

int main()
{
	double x;
	cout << "Enter x= ";
	cin >> x;
	cout << "x = " << calcint(x) << endl;

	system("Pause");
	return 0;
}