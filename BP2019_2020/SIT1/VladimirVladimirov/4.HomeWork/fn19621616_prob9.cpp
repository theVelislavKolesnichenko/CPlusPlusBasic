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
		cout << "Въведете година:" << endl;
		cin >> n;
		if (n % 4 == 0 && n > 0) {
			cout << "Високосна" << endl;
		}
		else if(n > 0) {
			cout << "Не е високосна" << endl;
		}
	} while (n>=0);
}