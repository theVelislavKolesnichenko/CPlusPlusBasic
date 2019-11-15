#include <iostream>
using namespace std;
float float_in(char ch);
float prob(float a, float b);
int main() {
	float a, b ;
	a = float_in('a');
	b = float_in('b');
	cout << "x = 2 * ((a - b) / (b - a))" << "\nx = " << prob(a, b);




	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << "=";
	cin >> n;
	return n;
}
float prob(float a, float b) {
	return 2 * ((a - b) / (b - a));
}