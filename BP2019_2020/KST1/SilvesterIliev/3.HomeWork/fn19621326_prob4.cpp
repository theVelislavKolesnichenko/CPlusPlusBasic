#include <iostream>
#include <math.h>
using namespace std;

double funct1(double y);

int main()
{
	double y;
	cout << "�������� �������� �� y " ;
	cin >> y;
	funct1(y);
	return 0;
}
double funct1(double y)
{
	if (y == 0)
	{
		cout << "�� ���� �� �� ���� �� 0" << endl;
		return 0;
	}
	else
	{
		double x = 20 / y;
		cout << "���������� � " << x << endl;
		return x;
	}
}