#include <iostream>
using namespace std;
double sum(double y);
int main()
{
	double y;
	cout << "y=";
	cin >> y;
	cout << "x=" << sum(y) << endl;
	return 0;
}
double sum(double y) {
	return (2 * y + 5) / (14 - y / 3);
}
