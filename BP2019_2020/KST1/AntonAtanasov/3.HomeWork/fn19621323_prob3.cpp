#include <iostream>
using namespace std;
string function(double a);
int main()
{
	int a;
	cout << "Enter a = ";
	cin >> a;
	cout << function(a);
}
string function(double a)
{
	if (a > 0)
		return "Positive";
	if (a < 0)
		return "Negative";
}

