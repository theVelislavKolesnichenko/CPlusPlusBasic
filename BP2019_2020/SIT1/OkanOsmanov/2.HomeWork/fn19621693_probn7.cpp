#include <iostream>
using namespace std;
double FINDX(double y);

int main()
{
	double y;
	cout << "Enter a number:\n";
	cin >> y;
	cout << FINDX(y);

	return 0;
}

double FINDX(double y)
{
	double x = 2 * (2 * y + 5) / (14 - y / 3);
	return x;
}