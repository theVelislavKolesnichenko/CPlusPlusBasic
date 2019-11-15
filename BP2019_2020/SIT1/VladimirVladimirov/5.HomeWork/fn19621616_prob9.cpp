#include <iostream>
using namespace std;
void MUL(int *mul,int a, int b);

int main() {
	int mul = 0, a, b;
	cout << "Въведете число: ";
	cin >> a;
	cout << "Въведете число по-голямо от предходното: ";
	cin >> b;
	cout << mul <<endl;
	MUL(&mul, a, b);
	cout << mul << endl;





	return 0;
}
void MUL(int* mul, int a, int b) {
	*mul = a * b;
}