#include <iostream>
using namespace std;
void digit(int a);
int main() {
	int a;
	do {
		cout << "a= ";
		cin >> a;
		digit(a);
	}		
	while (a != 0);
}
void digit(int a) {
	if (a < 1000)
		cout << "less four digit";
	else if (a > 9999)
		cout << "more four digit";
	else
		cout << "four digit";
}
