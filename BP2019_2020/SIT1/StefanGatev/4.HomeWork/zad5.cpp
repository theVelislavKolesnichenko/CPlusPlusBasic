#include <iostream>
using namespace std;
void cikly(int a);
int main() {
	int a;
	cout << "a= ";
	cin >> a;
	cikly(a);
}
void cikly(int a) {
	for (int i = 1; i < a; i++)cout << i;
}