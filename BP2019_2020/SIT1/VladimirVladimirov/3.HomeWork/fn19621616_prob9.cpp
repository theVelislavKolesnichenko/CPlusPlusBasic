#include <iostream>
float float_in(char ch);
void result(float a);
using namespace std;

int main() {

	float a;
	a = float_in('a');
	result(a);


	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
void result(float a) {
	if (a > 0 && a < 1) {
		cout << "In this age the person is Baby";

	}
	else if (a >= 1 && a < 3) {
		cout << "In this age the person is Toddler";
	}
	else if (a >= 3 && a < 5) {
		cout << "In this age the person is Preschool";
	}
	else if (a >= 5 && a <= 12) {
		cout << "In this age the person is Gradeschooler";
	}
	else if (a >= 13 && a < 18) {
		cout << "In this age the person is Teen";
	}
	else if (a >= 18 && a < 21) {
		cout << "In this age the person is Young Adult";
	}
	else {
		cout << "unknown";
	}
}
