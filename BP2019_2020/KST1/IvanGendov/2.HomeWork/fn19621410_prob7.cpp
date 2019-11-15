#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double ur(double y);//ur=uravnenie
int main()
{
	int y;
	cout << "Vuvedi chisloto y=";
	cin >> y;
	cout << "Rezultatut na uravnenieto e x=" << ur(y);
	return 0;

}
double ur(double y)
{
	return 2 * (2 * y + 5) / (14 - y / 3);
}
