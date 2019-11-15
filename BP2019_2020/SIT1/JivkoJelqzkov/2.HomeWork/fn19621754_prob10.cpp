#include <iostream>
using namespace std;
struct rectangle {
	int a, b;
};
void inpt(rectangle& a);
int S(rectangle a);
int main() {
	rectangle x;
	inpt(x);
	cout << "S=" << S(x);
}
void inpt(rectangle& a) {
	cout << "a=";
	cin >> a.a;
	cout << "b=";
	cin >> a.b;
	
}
int S(rectangle a) {
	return a.a * a.b;
}