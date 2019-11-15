#include <iostream>
using namespace std;
int broi(int n);
int main() {
	int n;
	while (true) {
		cout << "n=";
		cin >> n;
		cout << "br=" << broi(n) << endl;
	}
	return 0;
}
int broi(int n) {
	int br = 0;
	while (n!=0) {
		n = n /10;
		++br;
	}
	return br;
}