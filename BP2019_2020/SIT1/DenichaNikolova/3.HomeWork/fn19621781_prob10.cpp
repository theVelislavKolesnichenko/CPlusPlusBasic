#include <iostream>

using namespace std;

void even_odd (int number);

int main()
{
	int number;

	cin >> number;
	even_odd(number);

	return 0;
}

void even_odd(int number)
{
	if (number % 2 == 0)
	{
		cout << "Even" << endl;
	}
	else
	{
		cout << "Odd" << endl;
	}
}