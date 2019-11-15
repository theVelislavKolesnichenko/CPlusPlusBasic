#include <iostream>
using namespace std;
double func(double y) {
	return 20 / y;
}
int main() {
	double y;
	cout << "y=";
	cin >> y;

	if (y == 0) cout << "Can't divide by 0" << endl;
	else cout << func(y);
}
