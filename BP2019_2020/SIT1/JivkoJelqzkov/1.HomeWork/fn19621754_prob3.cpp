#include <iostream>
using namespace std;
int main() {
	int a = 576;
	cout << a % 10 << (a % 100) / 10 << a / 100;
	return 0;
}