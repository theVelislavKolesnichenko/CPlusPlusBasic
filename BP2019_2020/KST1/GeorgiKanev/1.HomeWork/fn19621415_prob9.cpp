#include <iostream>
using namespace std;

int main() {
	cout << "You will choose values to solve the area of a triangle." << endl;
	float x, h, S;
	cout << endl << "Pick a number x for a side = ";
	cin >> x;
	cout << "Pick a number h for the height = ";
	cin >> h;
	S = (x * h) / 2;
	cout << endl << "The area is: " << S << endl;

	return 0;
}