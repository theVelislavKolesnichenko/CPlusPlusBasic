#include <iostream>
using namespace std;

int age_category(int a);

int main() {
	int age;
	cout << "Enter an age: ";
	cin >> age;
	age_category(age);

	return 0;
}

int age_category(int a) {
	switch (a) {
	// Only am age of 0 will display Baby, because 1 isn't included in the interval (0,1) <- 0 < a < 1;
	case 0: {cout << "Baby" << endl; }break;
	case 1: case 2: {cout << "Toddler" << endl; }break;
	case 3: case 4: {cout << "Preschool" << endl; }break;
	case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: {cout << "Gradeschooler" << endl; }break;
	case 13: case 14: case 15: case 16: case 17: {cout << "Teen" << endl; }break;
	case 18: case 19: case 20: {cout << "Young Adult" << endl; }break;
	default: {cout << "You're too old for this category(or your age is invalid)." << endl; }break;
	}
	return a;
}