#include <iostream>
using namespace std;

void chislo(int a);
int main() {
	int a;
	cout << "a=";
	cin >> a;
	cout << "The number is ";
	chislo(a);

	return 0;
}
void chislo(int a) {
	if (a % 2 == 0) { cout << "Even"; }
	else { cout << "Odd"; }
}