#include <iostream>
using namespace std;

int chislo(int a);

int main()
{
	int a;

	cout << "Vuvedete chislo: ";
	cin >> a;


	if (chislo(a) == 1)
	{
		cout << "Even";
	}

	else if (chislo(a) == 0)
	{
		cout << "Odd";

		return 0;
	}
}

	int chislo(int a)
	{
		if (a % 2 == 0)
		{
			return 1;
		}

		else
		{
			return 0;
		}

	}
