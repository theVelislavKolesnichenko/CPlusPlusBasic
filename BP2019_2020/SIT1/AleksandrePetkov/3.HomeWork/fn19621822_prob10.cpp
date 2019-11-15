#include <iostream>
using namespace std;
void parity(int a) {
	cout << (a % 2 == 0 ? "Even" : "Odd") << endl;
}
int main() {
	int a;
	cout << "a=";
	cin >> a;

	parity(a);
}
