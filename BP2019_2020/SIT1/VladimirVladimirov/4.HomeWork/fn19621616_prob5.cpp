#include <iostream>
using namespace std;
int float_in(char ch);
void result(int a);

int main() {

	int a;
	a = float_in('a');
	result(a);
	return 0;
}
int float_in(char ch) {
	int n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
void result(int a) {
	if (0 < a) {
		for (int i = 1; i <= a; i++) {
			cout<< i<<endl;
		}
	}
}

