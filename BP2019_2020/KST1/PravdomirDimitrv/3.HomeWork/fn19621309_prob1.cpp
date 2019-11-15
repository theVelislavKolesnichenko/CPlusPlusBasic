#include <iostream>
using namespace std;
int NO(int a);
int AND(int a, int b);
int OR(int a, int b);
int XOR(int a, int b);
int left(int a);
int right(int a);
int main()
{
	int a, b;
	cout << "Vuvedete chisloto a=";
	cin >> a;
	cout << "Vuvedete chisloto b=";
	cin >> b;
	cout << "NO=" << NO(a)<<endl;
	cout << "And=" << AND(a, b)<<endl;
	cout << "or=" << OR(a, b)<<endl;
	cout << "xor=" << XOR(a, b)<<endl;
	cout << "izmestvane na lqvo=" << left(a)<<endl;
	cout << "izmestvane na dqsno=" << right(a)<<endl;
	return 0;
}
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