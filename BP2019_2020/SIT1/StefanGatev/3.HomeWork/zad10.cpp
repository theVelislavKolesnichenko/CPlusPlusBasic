#include <iostream>
using namespace std;
void chetnost(int a);
int main() {
	int a;
	cout << "a= ";
	cin >> a;
	chetnost(a);
}
void chetnost(int a) {
	if (a % 2 == 0)
		cout << "a= " << "Even";
	else
		cout << "a= " << "Odd";
}