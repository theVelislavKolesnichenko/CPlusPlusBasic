#include <iostream>
#include <math.h>
using namespace std;
int uravnenie1(double y);
int uravnenie2(double y);
int main()
{
	double y;
	cout << "Vuvedete chisloto y=";
	cin >> y;
	if (15 < y && y < 58)
		cout << "Reshenieto na uravnenieto e x=" << uravnenie1(y);
	else if (58 < y && y < 87)
		cout << "Reshenieto na drugoto uravnenie e x=" << uravnenie2(y);
	else
		cout << "Vuvedete drugo chislo";
	return 0;
}
int uravnenie1(double y)
{
	//x = 2 * (2 * y + 5) / (14 - y / 3);
	return y = 2 * (2 * y + 5) / (14 - y / 3);
}
int uravnenie2(double y)
{
	//x = pow(y, 3) + (pow(y, 4) + 2 * y);
	return y = pow(y, 3) + (pow(y, 4) + 2 * y);

}