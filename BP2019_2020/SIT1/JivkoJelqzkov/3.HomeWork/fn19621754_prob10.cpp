#include <iostream>
using namespace std;
void EorO(int a) {
	if (a == 0) {
		cout << "wrong input";
	}
	else {
		if ((a % 2) == 0) {
			cout << "The number is :Even";
		}
		else cout << "The number is :Odd";
	}
}
int main() {
	int a;
	cout << "A=";
	cin >> a;
	EorO(a);
}