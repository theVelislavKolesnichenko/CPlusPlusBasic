#include <iostream>
#include <functional>
using namespace std;

int fun(int x, int y);

int main() {

	int x, y;
				cout << "Vuvedete y = " << endl;cin >> y;

	if (y <= 0) {cout << "You cannot divide by 0." << endl;}
	else if (y >= 0) {cout << "x = " << fun(x, y) << endl;}
	return 0;
}
int fun(int x, int y) {return x = 20 / y;}