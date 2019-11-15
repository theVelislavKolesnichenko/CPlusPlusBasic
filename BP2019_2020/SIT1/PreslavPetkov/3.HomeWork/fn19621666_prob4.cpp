#include <iostream>
using namespace std;
double x(double y);
int main() {
	double y;
	cout << "y=";
	cin >> y;
	cout << "x="<<x(y)<<endl;
	return 0;
}
double x(double y) {
	if (y > 0) {
		return 20 / y;
	}
	else cout << "it can't be devided by 0";
}