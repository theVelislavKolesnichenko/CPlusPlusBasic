#include <iostream>
#include <math.h>
using namespace std;

double zadacha(double y)

{
	if (y<1)
	{
		cout << " x = y3 + (y4 +2y)" << endl;
		cout << " x = ";
		cout << pow(y, 3) + pow(y, 4) + 2 * y;
		return 0;
	}
	else if(y>1)
	{
		cout << " x = 2(2y + 5) / (14 - y/3)" << endl;
		cout << " x = ";
		cout << (2 * ((2 * y) + 5)) / (14 - (y / 3));
		return 0;
	}
	else
	{
		cout << "Error";
		return 0;
	}
}

int main()
{
	double y;
	cout << "Vavedi chislo razlichno ot 1"<<endl;
	cout << " y = ";
	cin >> y;
	zadacha(y);
	return 0;
}
