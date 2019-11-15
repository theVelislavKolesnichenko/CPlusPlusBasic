#include <iostream>
using namespace std;
double neshto(double& sum, double n);
int main() {
	double n, sum = 1;
	cout << "n=";
	cin >> n;
	if (n < 0) {
		cout << "Invalid number!\n Try again.\n n=";
		cin >> n;
	}
	while (n != 0) {
		cout << "sum=" << neshto(sum, n) << endl;
		cout << "n=";
		cin >> n;
		if (n < 0) {
			cout << "Invalid number!\n Try again.\n n=";
			cin >> n;
		}
	}
	return 0;
}
double neshto(double& sum, double n) {
	return sum += sum * n;
}