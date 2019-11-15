#include <iostream>
using namespace std;
double Calculation(double y);

int main()
{
	int y;
	cout << "Enter y = ";
	cin >> y;
	if (y == 0)
	{
		cout << "Division by 0 is not possible! ";
	}
	else
	{ 
		cout << "x = " << Calculation(y);
	}

}
double Calculation(double y)
{
	return 20 / y;
}