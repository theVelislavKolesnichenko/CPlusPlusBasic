#include <iostream>
using namespace std;
void var(float *n);

int main() {
	float n = 0;
	cout << n << endl;
	var(&n);
	cout << n << endl;





	return 0;
}
void var(float *n) {
	cout << "Въведете число: ";
	cin >> *n;
}
