#include <iostream>
using namespace std;

void izchislenie(float y);
int main() {
	float y;
	cout << "y=";
	cin >> y;
	izchislenie(y);

	return 0;
}
void izchislenie(float y) {
	if (y == 0) {
		cout << "Ne moje da se deli na 0." << endl;
	}
	else {
		cout << "x=" << 20 / y<<endl;
	}
}
