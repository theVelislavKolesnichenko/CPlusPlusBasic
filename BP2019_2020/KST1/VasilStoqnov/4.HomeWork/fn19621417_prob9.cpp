#include <iostream>
using namespace std;
int func(int year);
int main()
{
	int year;
	cout << "vuvedete godina= ";
	cin >> year;
	func(year);
	return 0;
}
int func(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << year << " visokosna godina.";
			else
				cout << year << " ne e visokosna.";
		}
		else
			cout << year << " e visokosna.";
	}
	else
		cout << year << " ne e visokosna.";
	return year;
}