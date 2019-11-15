#include <iostream>
using namespace std;

float chislo(char ch);
float x(float y);
int main() {
	float y;
	y = chislo('y');
		cout << "x= " << x(y);
	return 0;
}
float chislo(char ch) {
	float f;
	cout << ch << "=";
	cin >> f;
	return f;
}
float x(float y) {

	return 2 * (2 * y + 5) / (14 - y / 3);
}