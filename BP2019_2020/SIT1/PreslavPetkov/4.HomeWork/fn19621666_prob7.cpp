#include <iostream>
using namespace std;
void sum1(int n[]);
int main() {
	int  i, c[10];
	cout << "Numbers:" << endl;
	for (i = 0; i < 10; i++) {
		cin >> c[i];
	}
	sum1(c);
	return 0;
}
void sum1(int n[]) {
	int br1 = 0;
	int br2 = 0;
	for (int i = 0; i < 10; i++) {
		if (n[i] > 0) {
			br1++;
		}
		else {
			br2++;
		}
	}
	cout << "The positive numbers are:" << br1 << endl;
	cout << "The negative numbers are:" << br2 << endl;
}