#include <iostream>
using namespace std;

int functional(int x, int y);
int functional2(int x, int y);

int main() {

	int x, y;

	cout << "Vuvedete y = " << endl;
	cin >> y;

	if (y < 1) {cout << "x = " << functional(x, y) << endl;}
	else if (y > 1) {cout << "x = " << functional2(x, y) << endl;}
	return 0;
}
int functional(int x, int y) {return x = (y*y*y + (y*y*y*y + 2 * y));}
int functional2(int x, int y) {return x = (2 * (2 * y + 5) / (14 - y / 3));}