#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double uravnenie(double a, double b);
int main()
{
	int a, b;
	cout << "Vuvedi chisloto a=";
	cin >> a;
	cout << "Vuvedei chisloto b=";
	cin >> b;
	cout << "Rezultatut na uravnenieto x = (a+b)^3 + (a^2 + 2ba – 2ab + b^2)=" << uravnenie(a, b);
	return 0;

}
double uravnenie(double a, double b)
{
	return pow(3, (a + b)) + (pow(2, a) + 2 * b * a - 2 * a * b + pow(2, b));
}

