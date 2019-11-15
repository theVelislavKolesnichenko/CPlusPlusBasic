#include <iostream>
using namespace std;
double fun(double num)
{
	if (num > 0)
	{
		cout << "positive";
	}
	else if (num<0)
	{
		cout << "negative";
	}
	else
	{
		cout << "osven 0";
	}
	return 0;
}

int main()
{
	double num1;
	cout << "Vyvedete chislo";
	cin >> num1;
	fun(num1);
	return 0;
}
