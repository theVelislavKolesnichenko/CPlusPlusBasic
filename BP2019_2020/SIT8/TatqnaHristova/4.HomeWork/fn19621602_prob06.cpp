#include <iostream>
using namespace std;

void elha1();
void elha2();
void elha3();

int main() 
{
	elha1();
	cout << endl;
	elha2();
	cout << endl;
	elha3();
	
	return 0;
}
void elha1() {
	for (int r = 0; r < 5; r++) {
		cout << "$";
		for (int c = 0; c < 4 - r; c++) {
			cout << "$";
		}
		cout << endl;
	}
}
void elha3() {
	for (int r = 0; r <= 5; r++) {
		string star, ran;
		for (int i = 0; i < 5 - r; i++) {
			ran += '$';
		}
		for (int i = 0; i < 0 + r; i++) {
			star += ' ';
		}
		cout << star << ran;
		cout << ran << star << endl;
	}
}
void elha2() {
	for (int r = 0; r < 3; r++) {
		cout << "$";
		for (int c = 0; c < 0 + r; c++) {
			cout << "$";
		}
		cout << endl;
	}
	for (int r = 0; r < 3; r++) {
		cout << "$";
		for (int c = 0; c < 1 - r; r++) {
			cout << "$";
		}
		cout << endl;
	}
}