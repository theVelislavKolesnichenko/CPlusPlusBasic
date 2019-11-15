#include <iostream>
using namespace std;
void odd(int);
void even(int);

void main()
{
	int b;
	cout << "Vuvedete chislo: ";
	cin >> b;
	even(b);
}
void even(int a)
{
	if (a % 2 == 0)
		cout << "Even.";
	else odd(a);
}
void odd(int)
{
	cout << "Odd.";
}