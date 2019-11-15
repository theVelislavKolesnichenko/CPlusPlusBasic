#include <iostream>
using namespace std;
void Sum(int a[]);
int main() {
	int c[2];
	cout << "Enter up to 3 numbers.\n";
	while (true) {
		Sum(c);
		cout << endl;
	}
	return 0;
}
void Sum(int a[]) {
	double sum = 0;
	int c, n = 0;
	cin >> c;
	while ((c >= 0) && (n < 2)) {
		a[n] = c;
		n++;
		cin >> c;
		if (c == 00) {
			exit(0);
		}
	}
	for (int i = 0; i < n; i++)
		sum = 3 * a[i];
	cout << "The sum is " << sum;
}