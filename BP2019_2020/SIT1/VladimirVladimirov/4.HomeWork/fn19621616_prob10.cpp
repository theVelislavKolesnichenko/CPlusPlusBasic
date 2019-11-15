#include <iostream>
using namespace std;
int float_in(char ch);
void result(int x);

int main() {

	int x;
	x = float_in('x');
	result(x);
	return 0;
}
int float_in(char ch) {
	int n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
void result(int x) {
		for (int n = 1; n <= 20; n++) {
			cout <<"v = ∑"<< (pow(x, n)+1) / ((2 * n)+1) << endl;
		}
}