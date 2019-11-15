#include <iostream>
using namespace std;

void funct1(int a, int b);
void funct2(int a, int b);
void funct3(int a, int b);
void funct4(int a, int b);
void funct5(int a, int b);
void funct6(int a, int b);




int main()
{
	int a=5;
	int b=9;
	funct1(a, b);
	funct2(a, b);
	funct3(a, b);
	funct4(a, b);
	funct5(a, b);
	funct6(a, b);

	return 0;
}

void funct1(int a, int b)
{
	cout << "а е =" << ~a << endl << "b е =" << ~b;
}
void funct2(int a, int b)
{
	int i = a & b;
	cout << endl << "Стойността на а и b е =" << i;
}
void funct3(int a, int b)
{
	int i = a | b;
	cout << endl << "Стойността на а или b е =" << i;
}
void funct4(int a, int b)
{
	int i = a ^ b;
	cout << endl << "Стойността на а XOR b е =" << i;
}
void funct5(int a, int b)
{
	int i = a<<5;
	int z = b<<5;
	cout << endl << "a e=" << i << endl << "b e=" << z;
}
void funct6(int a, int b)
{
	int i = a >> 4;
	int z = b >> 4;
	cout << endl << "a e=" << i << endl << "b e=" << z;
}