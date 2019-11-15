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
int funct2(int y)
{
	return 2*(2*y + 5)/(14 - y/3);
}
int main()
{
	cout << funct2(9) << endl;
	return 0;
}