#include<iostream>
using namespace std;
int baby(double a);
int main()
{
	double a;
	cout << "Na kolko godini si? "; cin >> a;
	cout << baby(a);
	return 0;
}
int baby(double a)
{
	if (a > 0 && a < 1)
	{
		cout << "Baby ";
	}
	else if (a >= 1 && a < 3)
	{
		cout << "Toddler ";
	}
	else if (a >= 3 && a < 5)
	{
		cout << "Preschool ";
	}
	else if (a >= 5 && a < 12)
	{
		cout << "Gradeschooler ";
	}
	else if (a >= 13 && a < 18)
	{
		cout << "Teen ";
	}
	else if (a >= 7 && a < 21)
	{
		cout << "Young Adult ";
	}
	return a;
}