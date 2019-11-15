#include <iostream>
using namespace std;
void result(int a, int &b);

int main() {

	int a;
	int b = 1;
	cout << "Въведете положителни числа(За изход въведете 0)" << endl;
	cin >> a;
	if (a > 0) {
		while (a > 0) {
			result(a, b);
			cin >> a;
		}
	}

	return 0;
}

void result(int a, int &b) {
	 b *= a;
	 cout << b<<endl;
}