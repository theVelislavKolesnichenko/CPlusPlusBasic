#include <iostream>
using namespace std;
int main() {
	float x, y;
	cout << "y= ";
	cin >> y;
	x = 20 / y;

	if (y == 0) {
		cout << "An equation cannot be divided by 0 ! " << endl;
	}
	else {
		cout << "x= " << x << endl;
	}
	return 0;
}
