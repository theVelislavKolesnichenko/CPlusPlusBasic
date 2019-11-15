#include <iostream>
using namespace std;
string function(int a);
int main()
{
	int a;
	cout << "Enter a = ";
	cin >> a;
	cout << function(a);
}
string function(int a)
{
	if (a % 2 == 0)
		return "Even";
	else 
		return "Odd";
}
