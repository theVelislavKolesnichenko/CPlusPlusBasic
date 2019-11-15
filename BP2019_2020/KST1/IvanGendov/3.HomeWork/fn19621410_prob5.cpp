#include <iostream>
#include <math.h>
using namespace std;
int uravnenie1(int y,int x);
int uravnenie2(int y,int x);
int main()
{
	int y, x = 0;
	cout << "Vuvedete chisloto y="; cin >> y;
	if (y > 1)
		cout << "Reshenieto na uravnenieto e x=" << uravnenie1(y, x);
	else
		cout << "Reshenieto na drugoto uravnenie e x=" << uravnenie2(y, x);
	return 0;
}
int uravnenie1(int y,int x)
{
	x = 2 * (2 * y + 5) / (14 - y / 3);
	return x;
}
int uravnenie2(int y, int x)
{
	x = pow(y, 3) + (pow(y, 4) + 2 * y);
	return x;

}