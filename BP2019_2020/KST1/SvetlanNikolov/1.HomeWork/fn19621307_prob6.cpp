#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int z;

	cout << "Vuvedete a = " << endl;
	cin >> a;
	cout << "Vuvedete b = " << endl;
	cin >> b;
	cout << "Vuvedete c = " << endl;
	cin >> c;

	z = 2 * (a - b) * (a - c);
	cout << "z = " << z << endl;

	return 0;
}