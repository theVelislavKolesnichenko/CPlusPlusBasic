
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double eq(double a, double b);
int main()
{
	int a, b;
	cout << " a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "Result x=" << eq(a, b);
	return 0;

}
double eq(double a, double b)
{
	return pow(3, (a + b)) + (pow(2, a) + 2 * b * a - 2 * a * b + pow(2, b));
}
