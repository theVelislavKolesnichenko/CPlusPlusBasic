#include <iostream>
#include <conio.h>
using namespace std;
int funct1(int a)
{
	if (a <= 999, a > 99)
		return a % 10;
	else return 0;
}
int funct2(int a)
{
	if (a <= 999, a > 99)
		return a / 10 % 10;
	else return 0;
}
int funct3(int a)
{
	if (a <= 999, a > 99)
		return a / 100 % 10;
	else return 0;
}
int main()
{
	cout << funct1(837) << endl;
	cout << funct2(837) << endl;
	cout << funct3(837) << endl;
	return 0;
}