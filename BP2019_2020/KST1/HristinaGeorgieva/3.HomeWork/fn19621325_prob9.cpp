#include <iostream>
using namespace std;
void age(int a);
int main()
{
	int a;
	cout << "Enter child's age\n";
	cin >> a;
	age(a);
	system("pause");
	return 0;
}
void age(int a) {
	if (a > 0 && a < 1) {
		cout << "Baby" << endl;
	}
	else if (a >= 1 && a < 3) {
		cout << "Toddler" << endl;
	}
	else if (a >= 3 && a < 5) {
		cout << "Preschool" << endl;
	}
	else if (a >= 5 && a <= 12) {
		cout << "Gradeschooler" << endl;
	}
	else if (a >= 13 && a < 18) {
		cout << "Teen" << endl;
	}
	else if (a >= 18 && a < 21) {
		cout << "Young adult" << endl;
	}
}

