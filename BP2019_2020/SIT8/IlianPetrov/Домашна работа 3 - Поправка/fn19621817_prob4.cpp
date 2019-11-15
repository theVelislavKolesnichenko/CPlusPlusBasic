#include <iostream>
using namespace std;
void Div(double y);
int main()
{
	double y;
	cout << "y= ";
	cin >> y;
	Div(y);
	return 0;
}

void Div(double y)
{
	if (y > 0)
	{
		double x;
		x=20 / y;
		cout<< x << endl;
	}
	else if (y == 0)
	{
		cout << "You can't divide by 0"<<endl;
	}
}