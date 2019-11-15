#include <iostream>
#include <conio.h>
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
	return 2*((a - b) / (b - a));
}
int main()
{
	cout << funct2(4, 5) << endl;
	return 0;
}