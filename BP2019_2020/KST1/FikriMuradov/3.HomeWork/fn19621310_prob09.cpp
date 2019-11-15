#include <iostream>
using namespace std;

int vuzrast(int a);

int main()
{
	int a;

	cout << "Vuvedete vuzrast: ";
	cin >> a;


	if (vuzrast(a) == 1)
	{
		cout << "Baby";
	}

	else if (vuzrast(a) == 2)
	{
		cout << "Toddler";
	}

	else if (vuzrast(a) == 3)
	{
		cout << "Preschool";
	}

	else if (vuzrast(a) == 4)
	{
		cout << "Gradeschooler";
	}

	else if (vuzrast(a) == 5)
	{
		cout << "Teen";
	}

	else if (vuzrast(a) == 6)
	{
		cout << "Young Adult";
	}

	return 0;
}

int vuzrast(int a)
{
	if (a>0 && a<1)
	{
		return 1;
	}

	else if (a>=1 && a<3)
	{
		return 2;
	}

	else if (a >= 3 && a < 5)
	{
		return 3;
	}

	else if (a >= 5 && a <= 12)
	{
		return 4;
	}

	else if (a >= 13 && a < 18)
	{
		return 5;
	}

	else if (a >= 18 && a < 21)
	{
		return 6;
	}

}