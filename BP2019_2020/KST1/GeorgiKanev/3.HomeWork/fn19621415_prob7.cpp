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
	if ( a > 5 ) {
		cout << "x= 2(2y+5)/(14-y/3) = " << 2 * (a * 2 + 5) / (14 - a / 3) << endl;
		return a;
	}
	else if (a <= -5) {
		cout << "x= y^3 + (4y + 2y) = " << pow(a, 3) + (4 * a + 2 * a) << endl;
		return a;
	}
	else {
		cout << "y must be in the intervals (-infinity;-5] and (5;+infinity)" << endl;
		return a;
	}
}