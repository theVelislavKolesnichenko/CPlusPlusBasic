#include <iostream>
using namespace std;
float input(char a);
float sabirane(float a, float b);
float izvajdane(float a, float b);
float umnojenie(float a, float b);
float delenie(float a, float b);

int main() {
	float a = input('a');
	float b = input('b');
	cout << a << "+" << b << "=" << sabirane(a, b) << endl << endl;
	float c = input('c');
	float d = input('d');
	cout << c << "-" << d << "=" << izvajdane(c, d) << endl << endl;
	float e = input('e');
	float f = input('f');
	cout << e << "*" << f << "=" << umnojenie(e, f) << endl << endl;
	float g = input('g');
	float h = input('h');
	cout << g << "/" << h << "=" << delenie(g, h) << endl << endl;
    return 0;
}

float input(char a) {
	float n;
	cout << a << "=";
	cin >> n;
	return n;
}

float sabirane(float a, float b) {
	return (a + b);
}

float izvajdane(float a, float b) {
	return (a - b);
}

float umnojenie(float a, float b) {
	return (a * b);
}

float delenie(float a, float b) {
	return (a / b);
}
