#include <iostream>
using namespace std;

double RNum(char s);
double X(double y);

int main()
{
	double y;
	y = RNum('y');
	cout << "X=" << X(y) << endl;
	return 0;
}

double RNum(char s)
{
	double a;
	cout << s << "=";
	cin >> a;
	return a;
};
double X(double y)
{
	return 2 * (2 * y + 5) / (14 - y / 3);
}