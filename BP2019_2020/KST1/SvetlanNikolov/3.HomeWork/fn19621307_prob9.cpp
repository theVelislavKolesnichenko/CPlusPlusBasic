#include <iostream>
using namespace std;
string age(int a);

void main() {
	int a;
	cout << "Vuvedete vuzrast: ";
	cin >> a;
	cout << age(a);
}
string age(int a) {
	if (a > 0 && a < 2) {
		return "Baby.";
	}
	else if (a >= 1 && a < 4) {
		return "Toddler.";
	}
	else if (a >= 5 && a <= 12) {
		return "Gradeschooler.";
	}
	else if (a >= 13 && a < 18) {
		return "Teen.";
	}
	else if (a >= 18 && a < 21) {
		return "Young Adult.";
	}
}