#include <iostream>
using namespace std;
void result();

int main() {


	result();
	return 0;
}

void result() {
	int n;
	do {
		cout << "Въведете число:" << endl;
		cin >> n;
		if (n > 999 && n < 10000) {
			cout << "Four-digit" << endl;
		}
		else if (n < 0 || n > 0 && n < 1000) {
			cout << "less four-digit" << endl;
		}
		else if(n > 10000){
			cout << "more four-digit" << endl;
		}
	} while (n != 0);
}