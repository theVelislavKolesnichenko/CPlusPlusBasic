#include <iostream>
using namespace std;
int age(int x);
int main()
{
	int x;
	cout << "Age= ";
	cin >> x;
	if (x > 0 && x < 1) {
		cout << "Baby" << endl;
	}
	else if (x >= 1 && x < 3) {
		cout << "Toddler" << endl;
	}
	else if (x >= 3 && x < 5) {
		cout << "Toddler" << endl;
	}
	else if (x >= 5 && x < 12) {
		cout << "Toddler" << endl;
	}
	else if (x >= 13 && x < 18) {
		cout << "Toddler" << endl;
	}
	else {
		cout << "Young Adult" << endl;
	}
	return 0;
}
int age(int x)
{
	return 0;
}