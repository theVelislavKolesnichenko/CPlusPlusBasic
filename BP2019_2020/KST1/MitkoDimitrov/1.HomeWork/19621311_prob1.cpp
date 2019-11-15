#include <iostream>
using namespace std;

int main() {

	int x = 10;
	int y = 3;

	cout <<  (x & y) << endl;
	cout <<  (x | y) << endl;
	cout << (x ^ y) << endl;
	cout << (x << 5) << endl;
	cout << ~x << endl;
	cout <<  (y >> 4) << endl;

	system("pause");

	return 0;
}