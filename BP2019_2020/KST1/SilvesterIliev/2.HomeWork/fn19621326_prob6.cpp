#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
float funct1(char a)
{
	float b;
	cin >> b;
	if (a == '-')
		return b * (-1);
	else return b;
}
int funct2(int a, int b)
{
	return pow(a + b, 3.0) + (pow(a, 2.0) + 2*a*b + pow(b, 2.0));
}
int main()
{
	cout << funct2(6, 8) << endl;
	return 0;
}