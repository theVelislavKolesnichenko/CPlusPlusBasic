#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
void funct1()
{
	cout << "start" << endl;
	char ch = _getch();
}
void funct2()
{
	cout << "final" << endl;
}
int main()
{
	funct1();
	funct2();

	return 0;
}