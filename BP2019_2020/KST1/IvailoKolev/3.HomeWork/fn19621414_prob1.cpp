#include <iostream>
using namespace std;
int ne(int a);
int i(int a, int b);
int ili(int a, int b);
int XOR(int a, int b);
int lqvo5(int a);
int dqsno4(int a);
int main()
{
	int a, b;
	cout << "Vuvedete chisloto a=";
	cin >> a;
	cout << "Vuvedete chisloto b=";
	cin >> b;
	cout << "\nBitovo ne=" << ne(a);
	cout << "\nBitovo i=" << i(a, b);
	cout << "\nBitovo ili=" << ili(a, b);
	cout << "\nBitovo XOR=" << XOR(a, b);
	cout << "\nBitovo izmestvane nalqvo=" << lqvo5(a);
	cout << "\nBitovo izmestvane nadqsno=" << dqsno4(a);
	return 0;
}
int ne(int a)
{
	return ~a;
}
int i(int a, int b)
{
	return a & b;
}
int ili(int a, int b)
{
	return a | b;
}
int XOR(int a, int b)
{
	return a ^ b;
}
int lqvo5(int a)
{
	return a << 5;
}
int dqsno4(int a)
{
	return a >> 4;
}