#include <iostream>
using namespace std;

double neravenstvo(double a, double b)
{
	if (a > b)
	{
		cout << "po-golqmoto chislo e a";
	}
	else if (a < b)
	{
		cout << "po-golqmoto chislo e b";
	}
	else
	{
		cout << "eto che stana ravenstvo";
	}
	return 0;
}
int main()
{
	double a, b;
	cout << "vyvedete a=" << endl;
	cin >> a;
	cout << "vyvedete b=" << endl;
	cin >> b;
	neravenstvo(a, b);
	return 0;
}