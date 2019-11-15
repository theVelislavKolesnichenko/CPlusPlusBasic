#include <iostream>
using namespace std;
int input(char ch) {
	int a;
	cout << ch << "=";
	cin >> a;
	return a;
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
}
