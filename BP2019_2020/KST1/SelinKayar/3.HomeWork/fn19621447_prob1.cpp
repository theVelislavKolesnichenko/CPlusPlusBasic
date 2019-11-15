#include <iostream>
using namespace std;
int NOT(int a);
int OR(int a, int b);
int AND(int a, int b);
int XOR(int a, int b);
int LEFT(int a);
int RIGHT(int a);
int main() {
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "Bitwise NOT of= " << NOT(a) << endl;
	cout << "Bitwise OR= " << OR(a, b) << endl;
	cout << "Bitwise AND= " << AND(a, b) << endl;
	cout << "Bitwise XOR= " << XOR(a, b) << endl;
	cout << "Bitwise 5 LEFT= " << LEFT(a) << endl;
	cout << "Bitwise 4 RIGHT= " << RIGHT(a) << endl;
	return 0;
}
int NOT(int a) {
	return ~a;
}
int OR(int a, int b) {
	return a | b;
}
int AND(int a, int b) {
	return a & b;
}
int XOR(int a, int b) {
	return a ^ b;
}
int LEFT(int a) {
	return a << 5;
}
int RIGHT(int a) {
	return a >> 4;
}
