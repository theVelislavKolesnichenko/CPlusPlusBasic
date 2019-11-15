#include <iostream>
using namespace std;
float input(char a);
float X(float a, float b);

int main() {
	float a = input('a');
	float b = input('b');
	cout << "x=" << X(a,b) << endl;
	return 0;
}

float input(char a) {
	float n;
	cout << a << "=";
	cin >> n;
	return n;
}

float X(float a, float b) {
	return (2 * ((a - b) / (b - a)));
}
