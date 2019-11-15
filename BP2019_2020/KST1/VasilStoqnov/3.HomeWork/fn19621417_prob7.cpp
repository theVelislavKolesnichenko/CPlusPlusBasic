#include <iostream>
#include <math.h>
using namespace std;
int uravnenie1(double y);
int uravnenie2(double y);
int main()
{
	int y;
	cout << "Vuvedete chisloto y=";
	cin >> y;
	if (y<=-5)
		cout << "Reshenieto na uravnenieto e x=" << uravnenie1(y)<<endl;
	else if (y>=5)
		cout << "Reshenieto na vtoroto uravnenie e x=" << uravnenie2(y)<<endl;
	else
		cout << "Vuvedete drugo chislo"<<endl;
	return 0;
}
int uravnenie1(double y)
{

	return y = 2 * (2 * y + 5) / (14 - y / 3);
}
int uravnenie2(double y)
{

	return y = pow(y, 3) + (pow(y, 2) + 2 * y);

}