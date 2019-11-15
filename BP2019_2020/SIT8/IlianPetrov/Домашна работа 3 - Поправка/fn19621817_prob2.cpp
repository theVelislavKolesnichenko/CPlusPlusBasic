#include <iostream>
using namespace std;
void Num(double x, double y);
int main()
{
	double x, y;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;

	cout << "The Bigger Number is: ";
	Num(x, y);
	return 0;
}

void Num(double x, double y)
{
	if (x > y)
	{
		cout << x <<endl;
	}
	else
	{
		cout << y<<endl;
	}
}
