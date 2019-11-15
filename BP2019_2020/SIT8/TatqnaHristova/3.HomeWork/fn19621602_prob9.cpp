#include <iostream>
#include <windows.h>
using namespace std;

void periodVuz(int x);
int main() 
{
	SetConsoleOutputCP(1251);
	int x;
	cout << "Въведете възраст: ";
	cin >> x;
	cout << "Периодът е: ";
	periodVuz(x);

	return 0;
}
void periodVuz(int x) {
	if (x > 0 && x < 1) {
		cout << "Baby" << endl;	
	}
	else if (x >= 1 && x < 3) {
		cout << "Toddler" << endl;	
	}
	else if (x >= 3 && x < 5) {
		cout << "Preschool" << endl;	
	}
	else if (x >= 5 && x <= 12) {
		cout << "Gradeschooler" << endl;	
	}
	else if (x >= 13 && x < 18) {
		cout << "Teen" << endl;	
	}
	else if (x >= 18 && x < 21) {
		cout << "Young Adult" << endl;	
	}
	else {
		cout << "Няма данни!" << endl;	
	}
}