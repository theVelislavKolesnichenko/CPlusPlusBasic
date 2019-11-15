#include <iostream>
#include <conio.h>
using namespace std;
float funct1(char b)
{
	float a;
	cin >> a;
	if (b == '-')
		return a * (-1);
	else return a;
}
float funct2(float a, float b, float c, float d)
{
	return (a + b + c + d) / 4;
}
int main()
{
	cout << funct1('-') << endl;
	cout << funct2(1, 2, 3, 4) << endl;
	return 0;
}