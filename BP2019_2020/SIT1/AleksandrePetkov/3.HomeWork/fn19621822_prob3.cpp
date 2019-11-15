#include <iostream>
using namespace std;
void isPositive(double a) {
	cout << ((a < 0) ? "Negative" : "Positive") << endl;
}
int main() {
	double a;
	cout << "a=";
	cin >> a;

	isPositive(a);
}
