#include <iostream>
//#include <stdlib.h>
using namespace std;

void check_leapyear(int year);

int main()
{
	int year;

	while(true)
	{
		cout << "Enter a year: ";
		cin >> year;

		if (year == 0)
		{
			break;
		}
		check_leapyear(year);

	}
	
	return 0;
}

void check_leapyear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << year << " is a leap year." << endl;
			else
				cout << year << " is not a leap year." << endl;
		}
		else
			cout << year << " is a leap year." << endl;
	}
	else
		cout << year << " is not a leap year." << endl;

}