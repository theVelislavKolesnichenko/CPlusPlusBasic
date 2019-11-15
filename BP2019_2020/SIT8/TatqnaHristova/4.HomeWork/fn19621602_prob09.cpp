#include<iostream>
#include <windows.h>
using namespace std;

void godina(int n);

int main()
{
	SetConsoleOutputCP(1251);
	int n;
	do {
		cout << "Въведете година: ";
		cin >> n;
	} while (n < 0);
	godina(n);

	return 0;
}
void godina(int n) {
	if ((n % 4 == 0) && (n % 100 != 0)) {
		cout << "Годината е високосна!" << endl;
	}
	else {
		cout << "Годината не е високосна!" << endl;
	}
}