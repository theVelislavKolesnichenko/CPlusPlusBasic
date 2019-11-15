#include <iostream>
#include <conio.h>

using namespace std;
double equation(double a, double b);
int main()
{
	double a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "Final result" << equation(a, b);
	return 0;

}
double equation(double a, double b)
{
	return 2 * ((a - b) / (b - a));
}