#include <iostream>
#include <string.h>
using namespace std;

double Delene(double a);

int main()
{
	double a;
	cout << "a=";
	cin >> a;
	cout <<Delene(a) << endl;
}

double Delene(double a)
{
	double x = 20 / a;
	if (a != 0) { return x; }
	else { cout << "Ne moje da se deli na ";  return 0; }
}