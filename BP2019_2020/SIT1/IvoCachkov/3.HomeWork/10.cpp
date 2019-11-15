#include <iostream>
using namespace std;

string evenorodd(int a);

int main()
{
	int a;
	cout << "Enter a = ";
	cin >> a;
	cout << "The number is " << evenorodd(a) << endl;

	system("Pause");
	return 0;
}

string evenorodd(int a)
{
	if (a % 2 == 0)
	{
		return "Even";
	}
	else
	{
		return "Odd";
	}
}