#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double ur(double a, double b);
int main()
{
	int a, b;
	cout << "Vuvedi chisloto a=";
	cin >> a;
	cout << "Vuvedei chisloto b=";
	cin >> b;
	cout << "Rezultatut na uravnenieto e x=" << ur(a, b);
	return 0;

}
double ur(double a, double b)
{
	return pow(3, (a + b)) + (pow(2, a) + 2 * b * a - 2 * a * b + pow(2, b));
}
