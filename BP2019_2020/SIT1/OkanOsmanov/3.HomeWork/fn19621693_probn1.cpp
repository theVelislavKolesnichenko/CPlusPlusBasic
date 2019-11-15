#include <iostream>
#include <stdio.h>
using namespace std;
void bitoviOperacii();
int main()
{
	bitoviOperacii();

}
void bitoviOperacii()
{
	int a, b;
	cin >> a >> b;
	printf("a = %d,b = %d\n", a, b);
	printf("a&b=%d\n", a & b);
	printf("a|b=%d\n",a | b);
	printf("a^b=%d\n",a^b);
	printf("~a = %d\n", a = ~a);
	printf("b<<1=%d\n", b<<5);
	printf("b>>1=%d\n", b >>4 );





}