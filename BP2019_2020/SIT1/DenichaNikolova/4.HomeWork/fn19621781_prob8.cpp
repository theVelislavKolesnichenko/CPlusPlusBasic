#include <iostream>

using namespace std;

void check_number(int number);

int main()
{
	int number;

	while (true)
	{
		cout << "Enter a number: ";
		cin >> number;

		if (number == 0)
		{
			break;
		}
		check_number(number);
	}

	return 0;
}

void check_number(int number)
{

	if (number > 999 && number < 10000)
	{
		cout << "four - digit" << endl;
	}
	else if (number > 9999 )
	{
		cout << "more four - digit" << endl;
	}
	else if (number < 1000)
	{
		cout << "less four - digit" << endl;
	}

}