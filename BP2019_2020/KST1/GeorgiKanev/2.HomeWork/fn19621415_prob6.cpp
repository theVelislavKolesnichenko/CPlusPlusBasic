#include <iostream>
#include <math.h>
using namespace std;

float equation(float a, float b);
float value(char ch);

int main() {
	float a, b;
	a = value('a');
	b = value('b');

	cout << "Result from x = (a+b)^3 + (a^2 + 2ba-2ba + b^2) = " << equation(a, b) << endl;
	return 0;
}


float value(char ch) {
	float choice;
	cout << ch << " = ";
	cin >> choice;
	return choice;
}

float equation(float a, float b) {
	float x = pow((a + b), 3) + (pow(a, 2) + 2*b*a - 2*a*b + pow(b, 2));
	return x;
}