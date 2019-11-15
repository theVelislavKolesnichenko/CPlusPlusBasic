#include <iostream>
float float_in(char ch);
void result(float a);
using namespace std;

int main() {

	float a;
	a = float_in('a');
	result(a);


	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
void result(float a) {
	if (a >= 1) {
		cout << "The number is positive";
	}
	else {
		cout<< "The number is negative";
	}
}