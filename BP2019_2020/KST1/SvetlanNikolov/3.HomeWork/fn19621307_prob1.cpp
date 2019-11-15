#include <iostream>
using namespace std;

int func1(int a, int b);
int func2(int a, int b);
int func3(int a, int b);
int func4(int a);
int func5(int a, int b);
int func6(int b);

int main() {
	int a, b;
	cout << "Insert a = ";
	cin >> a;
	cout << "Insert b = ";
	cin >> b;
	cout << "Bitwise AND operator is = " << func1(a, b) << endl;
	cout << "Bitwise OR operator is = " << func2(a, b) << endl;
	cout << "Bitwise XOR is operator = " << func3(a, b) << endl;
	cout << "Bitwise LEFT SHIFT operator is = " << func4(a) << endl;
	cout << "Bitwise NOT Operator is = " << func5(a,b) << endl;
	cout << "Bitwise RIGHT SHIFT operator is = " << func6(b) << endl;
	return 0;
}
int func1(int a, int b) {
	return (a & b);
}
int func2(int a, int b) {
	return (a | b);
}
int func3(int a, int b) {
	return (a ^ b);
}
int func4(int a) {
	return (a << 5);
}
int func5(int a, int b) {
	return (~a, ~b);
}
int func6(int b) {
	return (b >> 4);
}