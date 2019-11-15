#include <iostream>
using namespace std;

void sezon(int a);
int main() {
	int a;
	cout << "Enter a month`s number:";
	cin >> a;
	sezon(a);
	return 0;
}
void sezon(int a) {
	if ((a == 12 || a <= 2) && a > 0) {
		cout << "Winter";
	}
	else if (a >= 3 && a < 6) {
		cout << "Spring"<<endl;
	}
	else if (a >= 6 && a < 9) {
		cout << "Summer"<<endl;
	}
	else if (a >= 9 && a < 12) {
		cout << "Autumn"<<endl;
	}
	else {
		cout << "That`s not a month`s number." << endl;
	}
}