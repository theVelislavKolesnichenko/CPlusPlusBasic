#include <iostream>
using namespace std;
void SUM(int* sum, int a, int b);

int main() {
	int sum = 0, a, b;
	cout << "Въведете число: ";
	cin >> a;
	cout << "Въведете число по-голямо от предходното: ";
	cin >> b;
	cout << sum << endl;
	SUM(&sum, a, b);
	cout <<sum << endl;





	return 0;
}
void SUM(int* sum, int a, int b) {
	*sum = a + b;
}