#include <iostream>
#include <math.h>
using namespace std;

int input(char ch);
void checkDigits(int n);

int main() {
	int n;
	
	cout << "Input 0 to exit" << endl;
	do {
		n = input('n');
		checkDigits(n);
	} while (n != 0);
}

int input(char ch) {
	int n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
void checkDigits(int n) {
	n = abs(n);
	if (n >= 1000 && n <= 9999) cout << "Four digits" << endl;
	else if (n > 9999) cout << "More than four digits" << endl;
	else cout << "Less than four digits" << endl;
}