#include <iostream>
using namespace std;
int number();

int main() {
	int a, b;
	a = number();
	b = number();
	cout << "NOT a and NOT b: " << ~a << " and " << ~b << endl;
	cout << "a AND b= " << (a & b)<< endl;
	cout << "a OR b= " << (a | b) << endl;
	cout << "a XOR b= " << (a ^ b) << endl;
	cout << "5 to the left= " << endl << "a= " << (a << 5) << endl << "b= " << (b << 5) << endl;
	cout << "5 to the right= " << endl << "a= " << (a >> 4) << endl << "b= " << (b >> 4)<< endl;

	return 0;
}

int number() {
	int choice;
	cout << "Enter a whole number: ";
	cin >> choice;
	return choice;
}