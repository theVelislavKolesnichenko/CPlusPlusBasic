#include <iostream>
#include<math.h>
using namespace std;

double uravnenie( double y);

int main()
{
	double y;

	cout << "Vuvedete y = ";
	cin >> y;

	if (y == 0)
	{
		cout << "Ne moje da se deli na 0";
	}

	else
	{
		cout << "x = 20/y" << endl; 
		cout << "x = " << uravnenie(y) << endl;
	}
	
	return 0;
}

double uravnenie( double y)
{
	return 20 / y;
}