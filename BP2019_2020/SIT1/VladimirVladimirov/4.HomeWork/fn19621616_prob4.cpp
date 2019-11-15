#include <iostream>
#include <math.h>
using namespace std;
int float_in(char ch);
int result(int a, int b, int d, int x);
int result2(int a, int b, int d, int x);

int main() {

	int a, b, d, x;// формула ax^2 + 2bx + d = 0
	a = float_in('a');
	b = float_in('b');
	d = float_in('d');
	x = pow(b, 2) - (4 * a * d);
	cout <<"x1 = " << result(a, b, d, x) << endl;
	cout << "x2 = " << result2(a, b, d, x) << endl;
	return 0;
}
int float_in(char ch) {
	int n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
int result(int a, int b, int d, int x) {
	if (x > 1){
	return ((-b) + sqrt(x)) / (2 * a) ;
	}
	else if (x = 0) {
		return (-b) / 2 * a;
	}
	else {
		cout << "Няма реални корени ";
	}
}
int result2(int a, int b, int d,int x) {
	if (x > 1) {
		return ((-b) + sqrt(x)) / (2 * a);
	}
		else if (x = 0) {
		return (-b) / 2 * a;
	}
		else {
		cout << "Няма реални корени ";
	}
}
