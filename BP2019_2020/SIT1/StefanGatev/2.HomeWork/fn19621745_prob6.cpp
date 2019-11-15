#include <iostream>
#include <math.h>
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
	return (pow(a + b, 3) + (pow(a, 2) + 2 * b * a - 2 * a * b + pow(b, 2)));
}