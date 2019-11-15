#include <iostream>
using namespace std;

float equation(float a);
float value(char ch);

int main() {
	//Exercise asks for the initialization of two variables, hence y and z.
	float y, z;
	y = value('y');
	z = value('z');

	cout << "Result from x = 2(2y+5)/(14-y/3) = " << equation(y) << endl;
	cout << "Result from x = 2(2z+5)/(14-z/3) = " << equation(z) << endl;
	return 0;
}


float value(char ch) {
	float choice;
	cout << ch << " = ";
	cin >> choice;
	return choice;
}

float equation(float a) {
	float x = 2 * (2 * a + 5) / (14 - a/3);
	return x;
}