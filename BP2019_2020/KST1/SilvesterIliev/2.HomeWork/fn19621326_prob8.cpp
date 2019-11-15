#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int funct1(int t)
{
	return floor(987 / t);
}
int funct2(int V)
{
	return floor(987 / V);
}
int main()
{
	int a;
	int b;
	cout << "Времето е = " << endl;
	cin >> a;
	cout << "Скоростта е = " << funct1(a) << endl;

	cout << "Скоростта е = " << endl;
	cin >> b;
	cout << "Времето е = " << funct2(b) << endl;
	return 0;
}