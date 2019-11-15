#include <iostream>
#include <math.h>
using namespace std;

double calcy(int a, int c);

int main()
{
	double a, c;
	cout << "Please insert value a = ";
	cin >> a;
	cout << "Please insert value c = ";
	cin >> c;
	cout << "y = " << calcy(a, c) << endl;

	system("Pause");
	return 0;
}

double calcy(int a, int c)
{
	if (a < -2 || c==0)
	{
		cout<<"Invalid Input"<<endl;
	}
	else
	{
		return sqrt(a+2) - 2 / c;
	}
}