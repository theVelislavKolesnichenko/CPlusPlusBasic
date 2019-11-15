#include <iostream>
using namespace std;
void positive(double a);
int main() {
	double a;
	cout << "a= ";
	cin >> a;
	positive(a);
}
void positive(double a) {
	if (a >= 0)
		cout << "positive";
	else cout << "negative";
}