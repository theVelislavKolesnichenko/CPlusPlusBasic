#include <iostream>
using namespace std;

int main() {
	cout << "You will choose number values to solve the Area and Perimeter of a rectangle." << endl;
	float a, b, S, P;
	cout << endl << "Pick a number a for one side = ";
	cin >> a;
	cout << "Pick a number b for the other side = ";
	cin >> b;
	S = a * b;
	P = 2 * a + 2 * b;
	cout << endl << "The area is: " << S << endl;
	cout << endl << "The perimeter is: " << P << endl;

	return 0;
}