#include <iostream>
using namespace std;
int number(char a) {
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) return a % 32;
	else return -1;
}
int main() {
	char ch;
	cout << "ch: ";
	cin >> ch;

	cout << ch << " " << number(ch) << endl;
}
