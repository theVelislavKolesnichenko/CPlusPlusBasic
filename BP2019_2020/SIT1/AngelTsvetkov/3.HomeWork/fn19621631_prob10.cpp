#include <iostream>
using namespace std;
int num(char ch)
{
	int b;
	cout << " Number = ";
	cin >> b;
	return b;
}
int main()
{
	int b = num('b');
	if (b % 2 == 0)
	{
		cout << "Even" << endl;
	}
	else
	{
		cout << "Odd" << endl;
	}
	return 0;
}
