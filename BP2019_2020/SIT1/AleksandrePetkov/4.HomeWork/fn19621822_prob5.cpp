#include <iostream>
using namespace std;

int input(char ch);
void output(int n);

int main() {
	int n = input('n');

	output(n);
}

int input(char ch) {
	int n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
void output(int n) {
	for (int i = 1; i <= n; i++) cout << i << " ";
	cout << endl;
}