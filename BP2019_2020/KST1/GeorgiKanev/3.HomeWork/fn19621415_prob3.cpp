#include <iostream>
using namespace std;

float sign(float a);

int main() {
	float a;
	cout << "Enter value for a" << endl;
	cin >> a;
	sign(a);

	return 0;
}

float sign(float a) {
	if (a >= 0) {
		cout << a << " is positive." << endl;
		return a;
	}
	else {
		cout << a << " is negative." << endl;
		return a;
	}
}