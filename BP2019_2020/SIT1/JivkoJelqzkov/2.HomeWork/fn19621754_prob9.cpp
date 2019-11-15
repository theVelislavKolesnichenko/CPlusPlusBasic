#include <iostream>
using namespace std;
struct triangle {
	int a, b, c;
};
void inpt(triangle& a);
int P(triangle a);
int main() {
	triangle x;
	inpt(x);
	cout << "P="<<P(x);
}
void inpt(triangle& a) {
	cout << "a=";
	cin >> a.a;
	cout << "b=";
	cin >> a.b;
	cout << "c=";
	cin >> a.c;
}
int P(triangle a) {
	return a.a + a.b + a.c;
}