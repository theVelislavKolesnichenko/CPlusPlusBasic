#include <iostream>
using namespace std;
int float_in(char ch);
int result(int a, int b, int lcm);
int result2(int c, int d);

int main() {

	int a, b, lcm, gcd, c, d;
	a = float_in('a');
	b = float_in('b');
	c = float_in('c');
	d = float_in('d');
	if (a > b) {
		lcm = a;
	}
	else {
		lcm = b;
	}
	cout << result(a, b, lcm)<<endl;
	cout <<"НОД = "<< result2(c, d);
	return 0;
}
int float_in(char ch) {
	int n;
	cout << ch << " = ";
	cin >> n;
	return n;
}
int result(int a, int b, int lcm ) {
	while (1) {
		if (lcm % a == 0 && lcm % b == 0) {
			cout << "НОК = ";
			break;
		}
		lcm++;
	}
	return lcm;
}
int result2(int c, int d) {
	if (c == 0 || d == 0) {
		return 0;
	}
	else if (c > d) {
		return (c % d);
	}
	else { 
		return (d % c); 
	}
}