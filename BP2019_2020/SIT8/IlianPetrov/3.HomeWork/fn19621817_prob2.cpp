#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;

	if (x>y)
	{
		cout << x << " Is The Bigger Number";
	}
	else
	{
		cout << y << " Is The Bigger Number";
	}

	return 0;
}