#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

void progNum(int x);

int main()
{
	SetConsoleOutputCP(1251);
	int x;
	cout << "Въведете число: ";
	cin >> x;
	cout << "Числото е: ";
	progNum(x);

	return 0;
}
void progNum(int x) {
	if (x % 2 == 0) {
		cout << "Even!" << endl;
	}
	else if (x % 2 != 0) {
		cout << "Odd!" << endl;
	}
}