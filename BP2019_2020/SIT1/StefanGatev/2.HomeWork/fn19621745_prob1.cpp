#include <iostream>
using namespace std;
void start();
void final();

int main() {
	start();
	cin.getch();
	final();
    return 0;
}

void start() {
	cout << "start?" << endl;
}

void final() {
	cout << "final!" << endl;
}