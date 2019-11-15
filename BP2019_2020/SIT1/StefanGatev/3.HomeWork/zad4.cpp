#include <iostream>
using namespace std;
double result(double y);
int main() {
	double y;
	cout << "y= ";
	cin >> y;
	if (y == 0)
		cout << "ne se deli na 0";
	else cout << "x= " << result(y);
}
double result(double y) {
	return (20 / y);
}