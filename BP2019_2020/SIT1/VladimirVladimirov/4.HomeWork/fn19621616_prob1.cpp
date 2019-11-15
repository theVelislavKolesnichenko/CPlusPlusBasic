#include <iostream>
#include <math.h>
using namespace std;
float float_in(char ch);
void result(int a, int c);

int main() {

	int a, c;
	a = float_in('a');
	c = float_in('c');
	result(a, c);


	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
void result(int a,int c) {
	if ((a < 0) || (c == 0)) {
		cout << "Invalid input";
	}
	else {
		cout << "y = " << (sqrt(a + 2) - (2 / c));
	}
}