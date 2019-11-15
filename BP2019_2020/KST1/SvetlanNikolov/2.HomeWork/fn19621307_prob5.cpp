#include <iostream>
#include <conio.h>
using namespace std;

double function(double a, double b);

int main() {
	double a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Rezultatut e: " << function(a, b);
}
double function(double a, double b)
{
	return 2 * ((a - b) / (b - a));
}