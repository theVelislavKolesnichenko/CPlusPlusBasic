#include <iostream>
using namespace std;

double calcx(int x);

int main()
{
	int x;
	cout << "Enter x = ";
	cin >> x;
	cout << "x = " << calcx(x) << endl;

	system("Pause");
	return 0;
}

double calcx(int x)
{
	if (x < 1)
	{
		return pow(x, 3) + (pow(x, 4) + pow(2, x));
	}
	else
	{
		return 0;
	}
}