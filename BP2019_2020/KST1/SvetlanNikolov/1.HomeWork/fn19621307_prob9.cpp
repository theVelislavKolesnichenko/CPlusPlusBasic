#include <iostream>
using namespace std;

int main() {

	int a; // страна //
	int h; // височина //
	int S; // лице //

	cout << "Vuvedete a = " << endl;
	cin >> a;
	cout << "Vuvedete h = " << endl;
	cin >> h;

	S = (a * h) / 2;

	cout << "S = " << S << endl;

	return 0;
}