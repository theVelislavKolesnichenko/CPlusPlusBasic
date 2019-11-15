#include <iostream>
using namespace std;

int main() {
	int A = 576;
	int units = A % 10;
	int tens = A / 10 % 10;
	int hundreds = A / 100 % 10;

	cout << "Units "<< units << " Tens "<< tens << " Hundreds "<<hundreds << endl;

	return 0;

}
