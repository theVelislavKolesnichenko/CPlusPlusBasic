#include<iostream>
using namespace std;
void vuz(double x)
{
	if (x > 0 && x < 1)
	{
		cout << "Baby";
	}
	if (x >= 1 && x < 3)
	{
		cout << "Toddler";
	}
	if (x >= 3 && x < 5)
	{
		cout << "Preschool";
	}
	if (x >= 5 && x <= 12)
	{
		cout << "Gradeschooler";
	}
	if (x >= 13 && x < 18)
	{
		cout << "Teen";
	}
	if (x >= 18 && x < 21)
	{
		cout << "Young Adult";
	}
}
int main()
{
	double a = 14;
	vuz(a);
}