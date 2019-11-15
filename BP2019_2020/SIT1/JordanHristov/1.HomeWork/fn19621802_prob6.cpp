#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	float z;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
    cin >> b;
	cout << "c= ";
	cin >> c;

	z = 2*(a - b)*(a - c);
	cout << "z = 2(a - b)(a - c)= " << z;
	return 0;
}