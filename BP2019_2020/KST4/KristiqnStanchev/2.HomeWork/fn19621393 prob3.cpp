#include <iostream>

using namespace std;

int main()
{
	int number = 576;
	int units = number % 10;
	int tens = (number / 10) % 10;
	int hundreds = (number / 100) % 10;

	cout<<("Number   = %d\n"
		"Units    = %d\n"
		"Tens     = %d\n"
		"Hundreds = %d\n", number, units, tens, hundreds);

	return 0;
}
