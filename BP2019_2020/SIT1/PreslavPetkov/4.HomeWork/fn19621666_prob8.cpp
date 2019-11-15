#include <iostream>
using namespace std;
void digit(int n);
int main() {
	int c;
	while (true) {
		cout << "c=";
		cin >> c;
		digit(c);
		if (c == 0)
			break;
	}
	return 0;
}
void digit(int n) {
		if ((n >= 1000) && (n <= 9999))
			cout << "four-digit" << endl;
		else if (n <= 1000)
			cout << "less four-digit" << endl;
		else
			cout << "more four-digit" << endl;
}