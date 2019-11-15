#include <iostream>
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
		cout << "You can not divide by 0." << endl;
		return a;
	}
	else {
		cout << "x= 20/y = " << (20/a) << endl;
		return a;
	}
}