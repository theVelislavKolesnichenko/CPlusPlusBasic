#include <iostream>
using namespace std;


void znak(float a);
int main() {
	float a;
	cout << "a=";
	cin >> a;
	znak(a);

	return 0;
}
void znak(float a) {
	if (a > 0) {
		cout<< a <<" is positive.";
	}
	else {
		cout << a << " is negative.";;
	}

}