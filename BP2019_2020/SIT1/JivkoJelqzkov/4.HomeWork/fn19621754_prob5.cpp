#include <iostream>
using namespace std;
void row(float a);
int main() {
	float a;
	cout << "a=";
	cin >> a;
	row(a);
}
void row(float a) {
	for (int i = 1; i < a; i++) {
		cout << i << " ";
	}
}