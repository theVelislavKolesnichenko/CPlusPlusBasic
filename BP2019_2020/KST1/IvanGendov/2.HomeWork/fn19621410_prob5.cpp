#include <iostream>
#include <conio.h>
using namespace std;
double ur(double a, double b);//ur=uravnenie
int main()
{
	int a, b;
	cout << "Vuvedi chisloto a=";
	cin >> a;
	cout << "Vuvedi chisloto b=";
	cin >> b;
	cout << "Rezultatut na uravnenieto e x=" << ur(a, b);
	return 0;

}
double ur(double a, double b)
{
	return 2 * ((a - b) / (b - a));
}
