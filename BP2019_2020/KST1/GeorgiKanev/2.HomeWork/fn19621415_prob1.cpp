#include <iostream>
using namespace std;

void start();
void final();

int main() {
	start();
	getchar();
	final();

	return 0;
}

void start() {
	cout << "\"Start?\""<<endl;
}

void final() {
	cout << "\"Final!\"" << endl;
}
