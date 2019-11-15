
#include <iostream>
using namespace std;
void calc(int* a, int b);
int main() {
	int sum, b;
	int* a = &sum;
	cout << "sum=";
	cin >> sum;
	cout << "b=";
	cin >> b;
	calc(a, b);
	cout << "sum after function :" << sum;

}
void calc(int* a, int b) {
	*(a) += b;
}