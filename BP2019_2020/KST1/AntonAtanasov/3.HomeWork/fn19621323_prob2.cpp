#include <iostream>
using namespace std;
double Compare(double x, double y);

int main()
{
	double x, y;
	cout << "Enter x = ";
	cin >> x;
	cout << "Enter y = ";
	cin >> y;
	cout << Compare(x, y);
}
double Compare(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}
