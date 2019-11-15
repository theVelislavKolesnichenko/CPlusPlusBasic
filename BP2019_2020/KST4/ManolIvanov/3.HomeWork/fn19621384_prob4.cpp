#include<iostream>
using namespace std;
void zad(int y)
{
	int x;
	x = 20 / y;
	cout << x;
}
int main()
{
	int a = 4;
	if (a >-1&&a<1)
	{
		cout << "ne moje da se deli na 0";
	}
	else
	{
		zad(a);
	}
}