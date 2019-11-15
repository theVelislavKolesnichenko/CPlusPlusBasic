#include <iostream>
using namespace std;

int main() {
	int x = 576;
	cout << " Units " << (x % 10);
	x /= 10;
	cout << " Tens " << (x % 10);
	x /= 10;
	cout << " Hundreds " << (x % 10);
	system("pause");
	return 0;
}