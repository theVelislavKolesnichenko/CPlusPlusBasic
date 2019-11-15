#include <iostream>
#include <conio.h>
using namespace std;
double uravnenie(double a, double b);
int main()
{
	int a, b;
	cout << "Vuvedi chisloto a=";
	cin >> a;

	cout << "Vuvedi chisloto b=";


	cin >> b;
	cout << "Rezultatut na uravnenieto x = 2((a-b)/(b-a))=" << uravnenie(a, b);
	return 0;

}
double uravnenie(double a, double b)
{
	return 2 * ((a - b) / (b - a));
}
