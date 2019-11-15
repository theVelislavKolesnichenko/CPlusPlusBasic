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
	if (a == 0) {
		cout << "y must be less than or larger than 1." << endl;
		return a;
	}
	else if (a > 1) {
		cout << "x= 2(2y+5)/(14-y/3) = " << 2*(a*2+5)/(14-a/3) << endl;
		return a;
	}
	else {
		cout << "x= y^3 + (4y + 2y) = " << pow(a,3) + (4*a + 2*a) << endl;
		return a;
	}
}