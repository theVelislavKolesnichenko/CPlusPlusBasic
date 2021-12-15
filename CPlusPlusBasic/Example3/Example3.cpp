#include <iostream>
using namespace std;

bool validateNumber(int start, int end, int number);

int main()
{
	const int start = -1234;
	const int end = 1234;
	int number;
	cout << "Enter number: ";
	cin >> number;
	while (!validateNumber(start, end, number))
	{
		cout << "Number is not between -1234 to 1234\n";
		cout << "Enter number: ";
		cin >> number;
	}

	cout << "Number is: " << number << endl;
}

bool validateNumber(int start, int end, int number)
{
	return number >= start && number <= end;
}
