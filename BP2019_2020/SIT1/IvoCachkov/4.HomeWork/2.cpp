#include <iostream>
#include <math.h>
using namespace std;

double calc(int a, int b);

int main()
{
	double a, b;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "y = " << calc(a, b)<< endl;

	system("Pause");
	return 0;
}

double calc(int a, int b)
{
	if (a < -2 || b == 0)
	{
		cout << "Invalid Input" << endl;
	}
	else
	{
		return sqrt(a + 2) - 2 / b;
	}
}