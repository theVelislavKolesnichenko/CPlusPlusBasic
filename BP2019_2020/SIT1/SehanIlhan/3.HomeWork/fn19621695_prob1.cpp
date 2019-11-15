#include <iostream>
#include <studio.h>
using namespace std;

int main()
{
	BITOPERATION();
}

void BITOPERATION()
{
	int a, b;
	cin >> a >> b;
	printif("a = %d, b = %d\n ", a, b);
	printif("a&b =  %d\n ", a & b);
	printif("a|b =  %d\n ", a | b);
	printif("a^b = %d\n ", a ^ b);
	printif("~a = %d\n ", a= ~a);
	printif("b<<1 = %d\n ", b<<5);
	printif("b>>1 = %d\n ", b>>4);

	
}