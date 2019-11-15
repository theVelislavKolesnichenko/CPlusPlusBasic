#include<iostream>
using namespace std;

int funct1(char a);

int main()
{
	while(true)
	{
	char a;
	cout << "Въведете буква ";
	cin >> a;
	if (a == '1') break;
	cout << funct1(a) << endl;
	}
	return 0;
}

int funct1(char a)
{
	if ((int)a > 96 && (int)a < 123)
	{
		return (int)a - 96;
	}
	else if ((int)a < 96 && (int)a>64)
	{
		return (int)a - 64;
	}
	else return 0;
}