#include <iostream>
using namespace std;
double double_in(char ch);
int equation(int a, int b);
int main() {
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "x="<< equation(a,b) << endl;
	system("pause");
	return 0;
}
double double_in(char ch) {
	double d;
	cout << ch << "=";
	cin >> d;
	return d;
}
int equation(int a, int b) {
	int x = 2 * ((a - b) / (b - a));
	return x;
}