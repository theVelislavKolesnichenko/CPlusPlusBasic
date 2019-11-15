#include <iostream>
float float_in(char ch);
void result(int a);
using namespace std;

int main() {

	int a;
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
void result(int a) {
	if (a % 2 == 0) {
		cout << "The number is even";
	}
	else {
		cout << "The number is odd";
	}
}