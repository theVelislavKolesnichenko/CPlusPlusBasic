#include <iostream>
using namespace std;
int age(int a);
int main()

{
	int a;
	cout << "Type person's age=";
	cin >> a;
	return 0;
}
int age(int a)


	{
		if (a > 0 && a < 1)
		{
			cout << "Baby";
	
		}
		else if (a >= 1 && a < 3)
		{
			cout << "Toddler";
		}
		else if (a >= 3 && a < 5)
		{
			cout << "Preschool";
		}
		else if (a >= 5 && a <= 12)
		{
			cout << "Gradeschooler";
		}
		else if (a >= 13 && a < 18)
		{
			cout << "Teen";
		}
		else if (a >= 18 && a < 21)
		{
			cout << "Young Adult";
		}

		return a;


	}

