#include <iostream>
using namespace std;

string age(int a);

int main()
{
	int a;
	cout << "Please insert value a = ";
	cin >> a;
	cout << "age of person - " << age(a) << endl;

	system("Pause");
	return 0;
}

string age(int a)
{
	if (a > 0 && a < 1)
	{
		return "Baby";
	}
	else if (a >= 1 && a < 3)
	{
		return "Toddler";
	}
	else if (a >= 3 && a < 5)
	{
		return "Preschool";
	}
	else if (a >= 5 && a <= 12)
	{
		return "Gradeschooler";
	}
	else if (a >= 13 && a < 18)
	{
		return "Teen";
	}
	else if (a >= 18 && a < 21)
	{
		return "Young Adult";
	}
	else
	{
		return "Adult";
	}
}