#include <iostream>
using namespace std;

void X(int a);

int main()
{
	int year;
	do {
		cout << "\nyear =";
		cin >> year;
		X(year);
	} while (year > 0);
	return 0;
}

void X(int a)
{
	if (a % 4 == 0) cout << "\nvisokosna";
	else cout << "\nne e visokosna";
}