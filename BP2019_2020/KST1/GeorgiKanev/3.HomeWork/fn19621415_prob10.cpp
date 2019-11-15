#include <iostream>
using namespace std;

int even_odd(int a);

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	even_odd(number);

	return 0;
}

int even_odd(int a) {
	if (a % 2 == 0) {
		cout << "Even" << endl;
		return a;
	}
	else cout << "Odd" << endl;
	return a;
}