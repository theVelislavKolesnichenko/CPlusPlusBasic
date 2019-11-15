#include <iostream>
using namespace std;
string bob(int a);
void main() {
	double a;
	cout << "Vuvedete a = ";
	cin >> a;
	cout << bob(a);
}
string bob(int a) {
	if (a > 0) {
		return "Positive.";
	}
	else if (a < 0) {
		return "Negative.";
	}
}