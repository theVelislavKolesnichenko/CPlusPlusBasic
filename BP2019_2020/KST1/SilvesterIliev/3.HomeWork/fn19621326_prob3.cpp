#include <iostream>
using namespace std;

void funct1(int a);

int main()
{
	int a;
	cin >> a;
	funct1(a);
	return 0;
}

void funct1(int a)
{
	if (a > 0)
	{
		cout << "Positive";
	}
	else if (a < 0)
	{
		cout << "Negative";
	}
}