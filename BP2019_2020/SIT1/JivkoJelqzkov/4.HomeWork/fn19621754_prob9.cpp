#include <iostream>
using namespace std;
void yr(int a);
int main() {
	int a;
	do {
		cout << "Year=";
		cin >> a;
		yr(a);
		cout << endl;
	} while (a != 0);

}
void yr(int a) {
	if (a == 0) {
		cout << "Wrong Input";
	}
	else {
		if (a % 4 == 0) {
			if (a % 100 != 0) {
				cout << "This year is a Leap year";
				}
			else {
				if (a % 400 == 0) {
					cout << "This year is a Leap year";
				}
				else cout<<"This year is a normal year";
			}
		}
		else cout << "This year is a normal year";
	}
}