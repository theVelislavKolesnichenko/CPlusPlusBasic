#include <iostream>
using namespace std;

int NO(int a);
int AND(int a, int b);
int OR(int a, int b);
int XOR(int a, int b);
int fiveLeft(int a);
int fourRight(int a);

int main()
{
	int a, b;
	cin >> a >> b;
	cout << NO(a) << endl << AND(a, b) << endl << OR(a, b) << endl << XOR(a, b) << endl << fiveLeft(a) << endl << fourRight(a) << endl;
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
int fiveLeft(int a)
{
	return a >> 5;
}
int fourRight(int a)
{
	return a << 4;
}
