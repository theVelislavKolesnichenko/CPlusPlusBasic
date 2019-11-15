#include <iostream>
#include <conio.h>
using namespace std;
float funct1(char a)
{
	float b;
	cout << a << " = ";
	cin >> b;
	return b;
}
float funct2(float a, float b, char sign)
{
	if (sign == '+')
	{
		return a + b;
	}
	else if (sign == '-')
	{
		return a - b;
	}
	else if (sign == '*')
	{
		return a * b;
	}
	else if (sign == '/')
	{
		return a / b;
	}
	else return 0;
}
int main()
{
	funct1('a');
	cout << funct2(1, 2, '+') << endl;
	cout << funct2(1, 2, '-') << endl;
	cout << funct2(1, 2, '*') << endl;
	cout << funct2(1, 2, '/') << endl;

	return 0;
}