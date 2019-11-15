#include <iostream>
#include <cmath>
using namespace std;
double funct(double a, double c)
{
	if (a + 2 <0 || c = 0)
	{
		cout << "Invalid Input";
	}
	else
	{
		double s = sqrt(a + 2) - 2 /c;
		return s;
	}
}
int main()
{
	double a, b;
	int s;
	cin >> a >> b;
	s = funct(a, b);
	cout << s;
	return 0;
}