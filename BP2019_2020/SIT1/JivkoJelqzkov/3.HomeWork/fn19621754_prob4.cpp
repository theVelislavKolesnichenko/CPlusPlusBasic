#include <iostream>
using namespace std;
void calc(float y) {
	if (y == 0) {
		cout << "You cant divide by 0 ";
	}
	else { 
		cout << "The result is:" << 20 / y; 
	}
}
int main() {
	float y;
	cout << "y=";
	cin >> y;
	calc(y);
}