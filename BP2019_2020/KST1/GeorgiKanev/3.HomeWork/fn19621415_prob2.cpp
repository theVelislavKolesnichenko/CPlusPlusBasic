#include <iostream>
using namespace std;

float larger(float a, float b);

int main() {
	float a, b;
	cout << "Enter a= " << endl;
	cin >> a;
	cout << "Enter b= " << endl;
	cin >> b;
	larger(a, b);


	return 0;
}

float larger(float a, float b) {
	if (a > b) {
		cout << a << " is the larger number." << endl;
		return a;
	}
	else if (a == b) {
		cout << "Numbers are equal."<< endl;
		return 0;
	}
	else {
		cout << b << " is the larger number." << endl;
		return b;
	}
}
 