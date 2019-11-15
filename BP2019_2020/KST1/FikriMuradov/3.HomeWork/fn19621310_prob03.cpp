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
		cout << "Positive";
	}

	else if (chislo(a) == 0)
	{
		cout << "Negative";

		return 0;
	}
}

int chislo(int a)
{
	if (a > 0)
	{
		return 1;
	}

	else if (a < 0)
	{
		return 0;
	}

}