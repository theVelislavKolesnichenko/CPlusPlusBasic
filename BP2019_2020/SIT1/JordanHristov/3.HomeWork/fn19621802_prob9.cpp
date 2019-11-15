#include <iostream>
using namespace std;

void vuzrast(int a);
int main() {
	int a;
	cout << "Tvoqta vuzrast e: ";
	cin >> a;
	cout << "You are a";
		vuzrast(a);

	return 0;
}
void vuzrast(int a) {

	if (a >= 0 && a < 1) {cout << " Baby";}
	else if (a >= 1 && a < 3) {cout << " Toddler";}
	else if (a >= 3 && a < 5) {cout << " Preschool";}
	else if (a >= 5 && a <= 12) {cout << " Gradeschooler";}
	else if (a >= 13 && a < 18) {cout << " Teen";}
	else if (a >= 18 && a < 21) {cout << " Young Adult";}
	else {cout << "n old person ";}           
	}

