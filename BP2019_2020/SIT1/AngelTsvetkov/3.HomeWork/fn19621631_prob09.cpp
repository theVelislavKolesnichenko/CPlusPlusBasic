#include <iostream>
using namespace std;
int yrs(char ch)
{
	int b;
	cout << " Years = ";
	cin >> b;
	return b;
}
int main()
{
	int b = yrs('b');
	if ((b > 0 && b < 1))
	{
		cout << "Baby" << endl;

	}
	else if ((b >= 1 && b < 3))
	{
		cout << "Toddler" << endl;
	}
	else if ((b >= 3 && b < 5))
	{
		cout << "Preschooler" << endl;
	}
	else if ((b >= 5 && b <= 12))
	{
		cout << "Gradeschooler" << endl;
	}
	else if ((b >= 13 && b < 18))
	{
		cout << "Teen" << endl;
	}
	else if ((b >= 18 && b < 21))
	{
		cout << "Young Adult" << endl;
	}
	return 0;
}

