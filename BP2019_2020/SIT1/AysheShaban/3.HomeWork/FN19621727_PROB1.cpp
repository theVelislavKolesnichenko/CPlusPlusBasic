#include <iostream>
using namespace std;
int X(char ch)
{
	int a;
	cout << "Vavedi cqlo chislo" << endl;
	cout << ch << " = ";
	cin >> a;
	return a;
}

int main()
{
	int a, b;

	a = X('a');
	b = X('b');

	cout << "bitovo ne" << endl;
	cout << "a = ";
	cout << (~a) << endl;
	cout << "b = ";
	cout << (~b) << endl;

	cout << "Bitovo i" << endl;
	cout << (a & b) << endl;

	cout << " Bitovo ili " << endl;
	cout << (a | b) << endl;

	cout << " Bitovo XOR " << endl;
	cout << (a ^ b) << endl;

	cout << "Bitovo izmestvane na lqvo s 5 simvola na chislata" << endl;
	cout << " a = " << (a << 5) << endl;
	cout << " b = " << (b << 5) << endl;

	cout << "Bitovo izmestvane na dqsno s 4 simvola na chislata" << endl;
	cout << " a = " << (a >> 4) << endl;
	cout << " b = " << (b >> 4) << endl;



	return 0;
}