#include <iostream>
using namespace std;
void real(int& n);
int main() {
	int sum;
	real(sum);
	cout <<"sum="<< sum << endl;
}
void real(int& n) {
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	n = a + b;
}