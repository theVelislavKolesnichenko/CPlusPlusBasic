#include <iostream>
using namespace std;
string years(double a);
int main() {
	double a;
	cout << "a=";
	cin >> a;
	cout << years(a) << endl;
	return 0;
}
string years(double a) {
	if ((a > 0) && (a < 1)) {
		return "Baby";
	}
	else if ((a >= 1) && (a < 3)) {
		return "Toddler";
	}
	else if ((a >= 3) && (a < 5)) {
		return "Preschooler";
	}
	else if ((a >= 5) && (a <= 12)) {
		return "Gradeschooler";
	}
	else if ((a >= 13) && (a < 18)) {
		return "Teen";
	}
	else ((a >= 18) && (a < 21)); {
		return "Young Adult";
	}
}