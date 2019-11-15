#include <iostream>
#include <conio.h>
using namespace std;

void funct1(int a);

int main()
{
	while (true)
	{
		int a;
		cout << "Въведете възраст ";
		cin >> a;
		if (a < 0) break;
		funct1(a);
	}
	return 0;
}

void funct1(int a)
{
	if (a == 0 || a == 1)
	{
		cout << "Baby" << endl;
	}
	else if (a >= 1 && a < 3)
	{
		cout << "Toddler" << endl;
	}
	else if (a >= 3 && a < 5)
	{
		cout << "Preschool" << endl;
	}
	else if (a >= 5 && a <= 12)
	{
		cout << "Gradeschooler" << endl;
	}
	else if (a >= 13 && a < 18)
	{
		cout << "Teen" << endl;
	}
	else if (a >= 18 && a < 21)
	{
		cout << "Young Adult" << endl;
	}
	else
	{
		cout << "Out of range" << endl;
	}
}