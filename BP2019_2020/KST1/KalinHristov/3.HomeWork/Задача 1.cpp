#include <iostream>
using namespace std;
int NO(int a)
{
	return ~a;
}
int AND(int a, int b)
{
	return a & b;
}
int OR(int a, int b)
{
	return a | b;
}
int XOR(int a, int b)
{
	return a ^ b;
}
int left(int a)
{
	return a << 5;
}
int right(int a)
{
	return a >> 4;
}
int main()
{
	int a, b;
	cout << "Vuvedete 1 chislo"<< endl;
	cin >> a;
	cout << "Vuvedete 2 chisloto"<< endl;
	cin >> b;
	cout << "Bitovo NE:" << NO(a);
	cout << "Bitovo AND:" << AND(a, b);
	cout << "Bitovo OR:" << OR(a, b);
	cout << "Bitovo XOR:" << XOR (a, b);
	cout << "Bitovo izmestvane na lqvo:" << left(a);
	cout << "Bitovo izmestvane na dqsno:" << right(a);
	return 0;
}