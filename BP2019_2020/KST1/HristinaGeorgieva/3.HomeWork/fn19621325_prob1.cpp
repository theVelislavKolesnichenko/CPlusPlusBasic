#include <iostream>
using namespace std;
int NO(int a);
int AND(int a, int b);
int OR(int a, int b);
int XOR(int a, int b);
int LEFT(int a);
int RIGHT(int a);
int main()
{
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << NO(a) << endl;
	cout << AND(a, b) << endl;
	cout << OR(a, b) << endl;
	cout << XOR(a, b) << endl;
	cout << LEFT(a) << endl;
	cout << RIGHT(a) << endl;
	system("pause");
	return 0;
}
int NO(int a)
{
	return ~a;
}
int AND(int a, int b)
{
	return a&b;
}
int OR(int a, int b)
{
	return a | b;
}
int XOR(int a, int b)
{
	return a ^ b;
}
int LEFT(int a)
{
	return a << 5;
}
int RIGHT(int a)
{
	return a >> 4;
}
