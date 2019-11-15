#include <iostream>
#include <string.h>
using namespace std;

string IsItPositive(double a);

int main()
{
	double a;
	cout << "a=";
	cin >> a;
	cout << IsItPositive(a)<<endl;
}

string IsItPositive(double a)
{
	if (a >= 0) { return "Positive"; }
	else return "Negative";
}