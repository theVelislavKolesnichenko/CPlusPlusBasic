#include <iostream>
using namespace std;
string num(int a);
int main() {
	int a;
	cout << "a=";
	cin >> a;
	cout << "the number is:" << num(a) << endl;
}
string num(int a) {
	if (a % 2==0) {
		return "Even";
	}
	else return "Odd";
}