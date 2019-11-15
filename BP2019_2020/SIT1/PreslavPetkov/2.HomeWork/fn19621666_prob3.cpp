#include <iostream>
using namespace std;
double double_in(char ch);
double SUM(double a, double b,double c,double d);
int main() {
	double a, b, c, d;
	a = double_in('a');
	b = double_in('b');
	c = double_in('c');
	d = double_in('d');
	cout << "Sr aritm=" << SUM(a,b,c,d) << endl;
	return 0;
}
double double_in(char ch) {
	double a;
	cout << ch << '=';
	cin >> a;
	return a;
}
double SUM(double a, double b, double c, double d) {
	return (a + b + c + d) / 4;
}