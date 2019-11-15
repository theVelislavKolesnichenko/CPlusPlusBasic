#include <iostream>
using namespace std;
void chkdig(float a);
int main() {
	float a;
	do {
		cout << "Your digit is:";
		cin >> a;
		chkdig(a);
		cout << endl;
	} while (a != 0);
}
void chkdig(float a) {
	if (a == 0) { cout << "wrong input"; }
	else {
		if (a >= 1000 && a <= 9999) {
			cout << "Four-digit";
		}
		else {
			if (a < 1000) {
				cout << "Less than four-digits";
			}
			else cout << "More than four digits";
		}
	}

}