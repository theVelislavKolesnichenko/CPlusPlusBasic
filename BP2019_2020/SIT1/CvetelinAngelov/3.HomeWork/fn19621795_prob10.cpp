#include <iostream>

using namespace std;

void even(int a);

int main()
{
	int a(1), b;
	cout << "Homework - 3 | Exercise - 10\n\n";
	do
	{
		cout << "Anter an integer or 0 for exit: ";
		cin >> b;
		if (b)
		{
			even(b);
		}
		else {
			a = 0;
		}
	} while (a);
}

void even(int a)
{
	a = a % 2;
	if (a)
	{
		cout << "Odd.\n\n";
	}
	else {
		cout << "Even.\n\n";
	}
}