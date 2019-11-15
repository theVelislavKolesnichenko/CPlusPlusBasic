#include<iostream>
using namespace std;
void fun1(double y)
{
	double x;
	x = 2 * ((2 * y)+ 5) / ((14 - y )/ 3);
	cout << x;
}
int main()
{
	double a, b;
	cout << "Vuvedi dve chisla" << endl;
	cin >> a;
	cin >> b;
	cout << endl;
	cout << "Rezultatut ot formulata za a e: "; fun1(a);
	cout << endl;
	cout << "Rezultatut ot formulata za b e: "; fun1(b);
	cout << endl;
}