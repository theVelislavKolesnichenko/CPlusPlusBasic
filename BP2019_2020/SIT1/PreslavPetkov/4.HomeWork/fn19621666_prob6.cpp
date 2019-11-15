#include <iostream>
using namespace std;
void forma1(int n);
void forma2(int n);
void forma3(int n);
int main() {
	int a = 5;
	forma1(a);
	forma2(a);
	cout << endl;
	forma3(a);
	return 0;
}
void forma1(int n) {
	for (int i = n; i >= 1; i--) {
		for (int k = 1; k < i - n; k++) {
			cout << ' ';
		}
		for (int j = i; j >= 1; j--) {
			cout << "%";
		}
		cout << endl;
	}
}
void forma2(int n) {
	for (int i = 1; i <= n / 2; i++) {
		cout << endl;
		for (int k = 1; k <= i; k++) {
			cout << '%';
		}
	}
	for (int i = n / 2 + 1; i <= n; i++){
		cout << endl;
		for (int j = n - i + 1; j > 0; j--) {
			cout << '%';
		}
	}
	cout << endl;
}
void forma3(int n) {
	for (int i = n; i >= 1; i--) {
		for (int k = 1; k <= n - i; k++) {
			cout << ' ';
		}
		for (int j = i; j >= 1; j--) {
			cout << "%";
		}
		for (int j = 1; j <= i; j++) {
			cout << "%";
		}
		cout << endl;
	}
}