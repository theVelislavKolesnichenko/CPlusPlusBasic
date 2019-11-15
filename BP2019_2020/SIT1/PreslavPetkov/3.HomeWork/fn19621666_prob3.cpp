#include <iostream>
using namespace std;
string pos(int a);
int main() {
	int a;
	cout << "a=";
	cin >> a;
	cout << "the number is:" << pos(a) << endl;
	return 0;
}
string pos(int a) {
	if (a > 0) {
		return "positive";
	}
	else {
		return "negative";
	}
}