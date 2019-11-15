#include <iostream>
using namespace std;
int main()
{
	double y,x;
	cout << "y= ";
	cin >> y;

	if (y>0)
	{
		x = 20 / y;
		cout << "x= " << x << endl;
	}
	else if (y == 0)
	{
		cout << "You can't divide by zero" << endl;
	}
	else 
	{
		x = 20 / y;
		cout << "x= " << x << endl;
	}
	
	return 0;
}