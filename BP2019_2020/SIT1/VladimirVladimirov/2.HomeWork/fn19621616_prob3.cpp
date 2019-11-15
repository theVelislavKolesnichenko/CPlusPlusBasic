#include <iostream>
using namespace std;
float float_in(char ch);
float x(float a, float b, float c, float d);
int main() {
	float a, b, c, d;

	a = float_in('a');
	b = float_in('b');
	c = float_in('c');
	d = float_in('d');
	cout << "x = (a + b + c + d) / 4" << "\nx = " << x(a, b, c, d);

	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << "=";
	cin >> n;
	return n;
}
float x(float a, float b, float c, float d) {
	return (a + b + c + d) / 4;
}