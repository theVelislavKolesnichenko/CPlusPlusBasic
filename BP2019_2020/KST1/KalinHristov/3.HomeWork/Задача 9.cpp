#include <iostream>
using namespace std;
int tragediq(int a)
{
	if (0 > a&& a < 1)
	{
		return 1;
	}
	else if (1 >= a&& a < 3)
	{
		return 2;
	}
	else if (3 >= a&& a < 5)
	{
		return 3;
	}
	else if (5 >= a&& a < 12)
	{
		return 4;
	}
	else if (13 >= a&& a < 18)
	{
		return 5;
	}
	else if (18 >= a&& a < 21)
	{
		return 6;
	}
	else if (a <= 0 || a >= 21)
	{
		cout << "Chisloto trqbva da e ot 1 do 20";
		return 7;
	}
		
}
int main()
{
	int a;
	cout << "Vuvedete godini:" << endl;
	cin >> a;
	if (tragediq(a) == 1)
	{
		cout << "Baby";
	}
	if (tragediq(a) == 2)
	{
		cout << "Toddler";
	}
	if (tragediq(a) == 3)
	{
		cout << "Preschool";
	}
	if (tragediq(a) == 4)
	{
		cout << "Gradeschooler";
	}
	if (tragediq(a) == 5)
	{
		cout << "Teen";
	}
	if (tragediq(a) == 6)
	{
		cout << "Young Adult";
	}
	if (tragediq(a) == 7)
	{
		cout << "Chisloto trqbva da e ot 1 do 20";
	}
}