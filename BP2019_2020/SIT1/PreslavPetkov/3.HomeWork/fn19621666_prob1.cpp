#include <iostream>
using namespace std;
int c(int a);
int d(int a, int b);
int e(int a, int b);
int f(int a, int b);
int izm1(int a);
int izm2(int b);
int main() {
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "~a=" << c(a) << endl;
	cout << "a&b="<<d(a,b)<< endl;
	cout << "a|b=" << e(a, b) << endl;
	cout << "a^b=" << f(a, b) << endl;
	cout << "a<<5=" << izm1(a) << endl;
	cout << "b>>4" << izm2(b) << endl;
	return 0;
}
int c(int a) {
	return ~a;
}
int d(int a, int b) {
	return a & b;
}
int e(int a, int b) {
	return a | b;
}
int f(int a, int b) {
	return a ^ b;
}
int izm1(int a) {
	return a << 5;
}
int izm2(int b) {
	return b >> 4;
}