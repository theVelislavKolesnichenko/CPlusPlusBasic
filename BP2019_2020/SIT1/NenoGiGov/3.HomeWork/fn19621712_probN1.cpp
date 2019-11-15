#include <iostream>
using namespace std;


int Fnoa(int a);
int Fnob(int b);
int Fand(int a,int b);
int For(int a, int b);
int Fxor(int a, int b);
int Fbila(int a);
int Fbilb(int b);
int Fbida(int a);
int Fbidb(int b);


int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "~a = " << Fnoa(a) << endl;
	cout << "~b = " << Fnob(b) << endl;
	cout << "a&b = " << Fand(a, b) << endl;
	cout << "a|b= " << For(a, b) << endl;
	cout << "a^b = " << Fxor(a, b) << endl;
	cout << "a<<5 = " << Fbila(a) << endl;
	cout << "b<<5 = " << Fbilb(b) << endl;
	cout << "a>>4 = " << Fbida(a) << endl;
	cout << "b>>4 = " << Fbidb(b) << endl;
	
	return 0;
}
int Fnoa(int a)
{
	return ~a;
}
int Fnob(int b)
{
	return ~b;
}
int Fand(int a, int b)
{
	return a & b;
}
int For(int a, int b)
{
	return a | b;
}
int Fxor(int a, int b)
{
	return a ^ b;
}
int Fbila(int a)
{
	return a << 5;
}
int Fbilb(int b)
{
	return b << 5;
}
int Fbida(int a)
{
	return a >> 4;
}
int Fbidb(int b)
{
	return b >> 4;
}
