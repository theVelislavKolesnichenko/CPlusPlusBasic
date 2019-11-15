#include <iostream>
#include <math.h>
using namespace std;
void sum(int x, int n);
int main() {
	int x, n;
	while (true) {
		cout << "x=";
		cin >> x;
		cout << "n=";
		cin >> n;
		if ((n >= 1) && (n <= 20)) {
			sum(x, n);
		}
		else {
			cout << "n must be between 1 and 20!\n";
			cout << "Try again";
		}
	}
}
void sum(int x, int n) {
	int sum=0;
	for (int i = 1; i <= n; i++) {
		sum = ((pow(x, i) + 1) / (2 * i + 1));
	}
	cout << "v=" << sum << endl;
}