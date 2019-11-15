#include <iostream>
using namespace std;
string big(double A, double B);
int main() {
	double A, B;
	cout << "Vuvedete A = ";
	cin >> A;
	cout << "Vuvedete B = ";
	cin >> B;
	cout << big(A, B);
}
string big(double A, double B) {
	if (A > B) {
		return "A is greater than B.";
	}
	else if (B > A) {
		return "B is greater than A.";
	}
}