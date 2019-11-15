#include <iostream>
#include <math.h>
using namespace std;

double zadacha(double a, double c);

int main()
{
	double a, c;
	cout << "Vavedete dve chisla" << endl;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	cout << "Reshenieto na zadachata e" << endl;
	zadacha(a, c);
	return 0;

}

double zadacha(double a, double c)
{
	double y;
	y = (sqrt(a + 2) - 2) / c;
	
 if((c!=0)&&((a+2)>=0))
	{
	    cout << "y = (sqrt(a + 2) - 2) / c" << endl;
		cout << "y=" << y << endl;
		return 0;
	}
 else
 {
	 cout << "Invalid input!" << endl;
	 return 0;

 }

}