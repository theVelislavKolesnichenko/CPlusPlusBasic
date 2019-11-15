#include <iostream>
using namespace std;
int input(char h) {
	int z;
	cout << h << "=";
	cin >> z;
	return z;
}
int main() {
	int a = input('a');
	int b = input('b');
	cout << (~a) << " " << (~b) << endl;
	cout << (a & b) << endl;
	cout << (a | b) << endl;
	cout << (a ^ b) << endl;
	cout << (a << 5) << " " << (b << 5) << endl;
	cout << (a >> 4) << " " << (b >> 4) << endl;
	return 0;
}
