#include <iostream>
using namespace std;
int baby(double a);
int main()
{
	double a;
	cout << "How old are you? "; cin >> a;
	cout << baby(a);
	return 0;
}
int baby(double a)
{
	if (a > 0 && a < 1)
	{
		cout << "You are Baby a=";
	}
	else if (a >= 1 && a < 3)
	{
		cout << "You are Toddler a=";
	}
	else if (a >= 3 && a < 5)
	{
		cout << "You are Preschool a=";
	}
	else if (a >= 5 && a < 12)
	{
		cout << "You are Gradeschooler a=";
	}
	else if (a >= 13 && a < 18)
	{
		cout << "You are Teen a=";
	}
	else if (a >= 18 && a < 21)
	{
		cout << "You are Young Adult a=";
	}
	else
	{
		cout << "You are too old for this a=";
	}
	{
		return a;
	}
}