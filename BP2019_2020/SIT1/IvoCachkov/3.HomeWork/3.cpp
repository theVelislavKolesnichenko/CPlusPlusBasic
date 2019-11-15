#include <iostream>
using namespace std;

string Param(int a)
{
	if (a > 0)
	{
		return "positive";
	}
	else
	{
		return "negative";
	}
}

int main()
{
	int a;
	cout << "a = ";
	cin >> a;
	cout << "a - " << Param(a) << endl;

	system("Pause");
	return 0;
}