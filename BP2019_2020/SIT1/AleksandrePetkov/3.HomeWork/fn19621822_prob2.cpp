#include <iostream>
using namespace std;
double max(double a, double b) {
	return a > b ? a : b;
}
int main() {
	double a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	
	cout << max(a, b) << endl;
}
