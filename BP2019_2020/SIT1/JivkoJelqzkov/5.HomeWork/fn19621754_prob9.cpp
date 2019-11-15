#include <iostream>
using namespace std;
void calc(int* a, int b);
int main() {
	int mul, mul2;
	int *a = &mul;
	cout << "mul=";
	cin >> mul;
	cout << "mul2=";
	cin >> mul2;
	calc(a, mul2);
	cout << "mul after function :"<<mul;

}
void calc(int* a, int b) {
	*(a) *= b;
}