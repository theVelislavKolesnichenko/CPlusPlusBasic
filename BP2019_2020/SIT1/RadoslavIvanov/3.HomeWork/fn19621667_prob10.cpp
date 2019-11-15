#include <iostream>
#include <string.h>
using namespace std;

string Num(int a);

int main()
{
	int num;
	cout << "num =";
	cin >> num;
	cout << Num(num);
}

string Num(int a)
{
	if (a % 2 == 0) return "Even";
	else return "Odd";
}