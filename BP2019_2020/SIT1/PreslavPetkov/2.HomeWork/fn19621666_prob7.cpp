#include <iostream>
using namespace std;
double double_in(char ch);
double x(double b);
int main() {
	double y;
	y = double_in('y');
	cout << "x=" << x(y) << endl;
}
double double_in(char ch) {
	double y;
	cout << ch << '=';
	cin >> y;
	return y;
}
double x(double y) {
	return 2 * (2 * y + 5) / (14 - y/3);
}