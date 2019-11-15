#include <iostream>
using namespace std;

int chislo(char ch);
int main() {
	int a, b;
	a = chislo('a');
	b = chislo('b');
	cout << (~a) << endl; //bitovo ne
	cout << (~b) << endl; //bitovo ne
	cout << (a&b) << endl; //bitovo i
	cout << (a|b) << endl; //bitovo ili
	cout << (a^b) << endl; //bitovo XOR
	cout << (a>>5) << endl; //izmestvane nalqvo s 5 bita
	cout << (b<<4) << endl; //izmestvane nadqsno s 4 bita


	return 0;
}
int chislo(char ch) {
	int a;
	cout << ch << "=";
	cin >> a;
	return a;
}
