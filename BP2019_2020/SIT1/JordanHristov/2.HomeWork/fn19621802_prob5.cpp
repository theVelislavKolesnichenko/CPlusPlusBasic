#include <iostream>
using namespace std;

float chislo(char ch);
float umnoj(float a, float b);
int main() {
	float a, b;
	a = chislo('a');
	b = chislo('b');
	cout << "x= " << umnoj(a, b) << endl;

	return 0;
}
float chislo(char ch) {
	float f;
	cout << ch << "=";
	cin >> f;
	return f;
}
float umnoj(float a, float b) {
	return 2*((a - b) / (b - a));
}