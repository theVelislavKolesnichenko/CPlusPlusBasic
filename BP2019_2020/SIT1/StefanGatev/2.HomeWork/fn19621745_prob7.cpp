#include <iostream>
using namespace std;
float input(char a);
float X(float y);

int main() {
	float a = input('a');
	cout << "x=" << X(b) << endl;
	float b = input('b');
	cout << "x=" << X(a) << endl;
	return 0;
}

float input(char a) {
	float n;
	cout << a << "=";
	cin >> n;
	return n;
}

float X(float y) {
	return (2 * (2 * y + 5) / (14 - y / 3));
}