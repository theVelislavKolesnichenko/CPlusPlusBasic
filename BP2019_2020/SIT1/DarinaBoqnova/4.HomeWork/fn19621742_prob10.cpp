#include <iostream>
using namespace std;

void calcv(double x);

int main()
{
	double x,v;
	cout << "Please insert value x = ";
	cin >> x;
	calcv(x);

	system("Pause");
	return 0;
}

void calcv(double x)
{
	for (double n = 1; n <= 20; n++)
	{
		cout << (pow(x, n) + 1 / (2 * n) + 1) << endl;
	}
}