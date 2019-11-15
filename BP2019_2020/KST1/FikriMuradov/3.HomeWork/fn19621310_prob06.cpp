#include <iostream>
#include<math.h>
using namespace std;

double y_1(double y);
double y_2(double y);

int main()
{
	int y;

	cout << "Vuvedete y = ";
	cin >> y;

	if (y>=58 && y<= 87)
	{
		cout << "x = y3 + (y4 + 2y)" << endl;
		cout << "x = " << y_1(y) << endl;
	}

	else if (y>15 && y<58)
	{
		cout << "2(2y + 5) / (14 - y / 3)" << endl;
		cout << "x = " << y_2(y) << endl;
	}

	return 0;
}

double y_1(double y)
{
	return pow(y,3) + (pow(y,4) + 2*y);
}

double y_2(double y)
{
	return 2*(2*y+5)/(14-y/3);
}
