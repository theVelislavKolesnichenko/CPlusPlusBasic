#include <iostream>
#include <conio.h>
using namespace std;

void start();
void final();

int main() {

	char a;
	start();
	a = _getch();
	final();
	return 0;

}
void start() {
	cout << "Start? " << endl;
}
void final() {
	cout << "Final!" << endl;
}