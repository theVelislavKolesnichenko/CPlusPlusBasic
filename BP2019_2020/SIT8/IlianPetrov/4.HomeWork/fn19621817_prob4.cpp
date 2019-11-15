#include <iostream>
#include <math.h>
using namespace std;
double Root1(int a, int b, int c);
double Root2(int a, int b, int c);

int main()
{
	int a, b, c;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;

	cout << Root1(a,b,c)<<endl;
	cout << Root2(a,b,c) << endl;

	return 0;
}
double Root1(int a, int b, int c)
{
	double x1;

	return x1 = (-b + sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
}
double Root2(int a, int b, int c)
{
	double x2;

	return x2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
}