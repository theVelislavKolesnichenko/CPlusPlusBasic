#include <iostream>
#include <iomanip>
using namespace std;
void result();
void result2();
void result3();
int main() {


	result();
	result2();
	result3();
	return 0;
}
void result() {
	int i, j;
	for (i = 5; i > 0; i--) {
		for (j = 0; j < i; j++) {
			cout << "%";
		}
		cout << endl;
	}
}
void result2() {
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < i; j++) {
			cout << "%";
		}
		cout << endl;
	}
	for (i = 2; i > 0; i--) {
		for (j = 0; j < i; j++) {
			cout << "%";
		}
		cout << endl;
	}

}

void result3(){
	cout << endl;
	int i = 5;
	do
	{
		cout << setw(5) << right << string(i, '%') << setw(5) << left << string(i, '%') << endl;
		i--;
	} while (i > 0);
}