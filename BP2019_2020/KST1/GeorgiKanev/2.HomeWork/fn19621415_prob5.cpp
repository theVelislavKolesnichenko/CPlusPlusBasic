#include <iostream>
using namespace std;

float equation(float a, float b);
float value(char ch);

int main() {
	float a, b;
	a = value('a');
	b = value('b');

	cout << "Result from x = 2*((" << a << "-" << b << ")/(" << b << "-" << a << ")) = " << equation(a, b) << endl;
	return 0;
}


float value(char ch) {
	float choice;
	cout << ch << " = ";
	cin >> choice;
	return choice;
}

float equation(float a, float b) {
	float x = 2*((a - b) / (b - a));
	return x;
}