#include <iostream>
using namespace std;

int main() {

	int x, y;
	
	cout << "Vuvedete y = " << endl;
	cin >> y;
	x = (2 * y + 5) / (14 - y / 3);
	cout << "x = " << x << endl;

	return 0;
}