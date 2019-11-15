#include <iostream>
#include<math.h>
using namespace std;

double y_golqmo(double y);
double y_malko(double y);

int main()
{
	double y;

	cout << "Vuvedete y = ";
	cin >> y;

	if (y > 1)
	{
		cout << "x = 2(2y + 5)/(14 - y/3)" << endl;
		cout << "x = " << y_golqmo(y) << endl;
	}

	else if (y<1)
	{
		cout << "x = y3 + (y4 + 2y)" << endl;
		cout << "x = " << y_malko(y) << endl;
	}

	return 0;
}

double y_golqmo(double y)
{
	return 2*(2*y + 5) / (14 - y / 3);
}

double y_malko(double y)
{
	return pow(y, 3) + (pow(y, 4) + 2 * y);
}