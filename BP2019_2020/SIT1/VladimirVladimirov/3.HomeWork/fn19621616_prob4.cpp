#include <iostream>
float float_in(char ch);
void result(float y);
using namespace std;

int main() {

	float y;
	y = float_in('y');
	result(y);


	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
void result(float y) {
	if (y != 0) {
		cout << "x = " << (20 / y);
		
	}
	else {
		cout << "The number can't be divided by 0";
	}
}