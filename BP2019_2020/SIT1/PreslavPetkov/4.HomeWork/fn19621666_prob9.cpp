#include <iostream>
using namespace std;
void year(int n);
int main() {
	int y;
	while (true) {
		cout << "y=";
		cin >> y;
		cout << "Godinata ";
		year(y);
		if (y <= 0)
			break;
	}
	return 0;
}
void year(int n) {
	if (n % 4 == 0)
		cout << "e visokosna" << endl;
	else
		cout << "ne e visokosna" << endl;
}