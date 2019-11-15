#include <iostream>
#include <math.h>
using namespace std;

float result(float a);

int main() {
	float y;
	cout << "Enter value for y" << endl;
	cin >> y;
	result(y);

	return 0;
}

float result(float a) {
	if (58 <= a && a <= 87) {
		cout << "x= 2(2y+5)/(14-y/3) = " << 2 * (a * 2 + 5) / (14 - a / 3) << endl;
		return a;
	}
	else if (15 < a && a < 58) {
		cout << "x= y^3 + (4y + 2y) = " << pow(a, 3) + (4 * a + 2 * a) << endl;
		return a;
	}
	else {
		cout << "y must be in the intervals [58;87] and (15;58)" << endl;
		return a;
	}
}