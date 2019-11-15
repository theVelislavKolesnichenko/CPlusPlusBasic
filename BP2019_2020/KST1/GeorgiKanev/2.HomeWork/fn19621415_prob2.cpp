#include <iostream>
using namespace std;

float attach_value(char ch);
float addition(float a, float b);
float subtraction(float a, float b);
float division(float a, float b);
float multiplication(float a, float b);

int main() {
	float a, b;
	a = attach_value('a');
	b = attach_value('b');
	addition(a, b);

	float c, d;
	c = attach_value('c');
	d = attach_value('d');
	subtraction(c, d);

	float e, f;
	e = attach_value('e');
	f = attach_value('f');
	division(e, f);

	float g, h;
	g = attach_value('g');
	h = attach_value('h');
	multiplication(g, h);

	return 0;
}

float attach_value(char ch) {
	float choice;
	cout << ch << ' ' << '=' << ' ';
	cin >> choice;
	return choice;
}

float addition(float a, float b) {
	cout <<"Addition: "<< a << '+' << b << " = " << a + b <<endl;
	return a + b;
}


float subtraction(float a, float b) {
	cout <<"Subtraction: "<< a << '-' << b << " = " << a - b << endl;
	return a - b;
}


float division(float a, float b) {
	cout <<"Division: "<< a << '/' << b << " = " << a / b << endl;
	return a / b;
}


float multiplication(float a, float b) {
	cout <<"Multiplication: "<< a << '*' << b << " = " << a * b << endl;
	return a * b;
}