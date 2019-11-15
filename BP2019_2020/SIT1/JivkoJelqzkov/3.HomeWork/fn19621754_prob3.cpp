#include <iostream>
using namespace std;
void PoN(float a) {
	if (a > 0) {
		cout << "Positive";
	}
	else cout << "Negative";
}
int main() {
	float a;
	cout << "a=";
	cin >> a;
	PoN(a);
}