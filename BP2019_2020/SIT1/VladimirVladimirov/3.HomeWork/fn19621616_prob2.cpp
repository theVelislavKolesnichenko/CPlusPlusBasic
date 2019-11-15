#include <iostream>
#include <math.h>
float float_in(char ch);
float result(float a, float b);
using namespace std;

int main() {
	float a, b;
	a = float_in('a');
	b = float_in('b');
	cout << "The bigger number between a & b is: " << result(a, b);


	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << "=";
	cin >> n;
	return n;
}
float result(float a, float b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}