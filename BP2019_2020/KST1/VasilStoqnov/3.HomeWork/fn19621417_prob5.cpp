#include <iostream>
#include <math.h>
using namespace std;
double func( double num)
	{
		return pow(num, 3) + 4 * num + 2 * num;
	}
double func1(double num1)
	{
		return 2 * (2 * num1 + 5) / (14 - num1 * 3);
	}
int main()
{
	double y;
	cout << "vuvedete chislo=";
	cin >> y;
	if (y<1) cout <<"reshenieto na purvoto uravnenie e=" << func(y)<<endl;
	else if (y>1) cout << "reshenieto na vtoroto uravnenie e=" << func1(y)<<endl;
	return 0;
}