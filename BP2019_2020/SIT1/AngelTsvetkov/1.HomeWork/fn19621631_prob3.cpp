#include <stdio.h>
int main()
{
	int n = 576;
	int un, ten, hun;

	un = n % 10;
	ten = (n / 10) % 10;
	hun = (n / 100) % 10;
	printf("Units %d Tens %d Hundreds %d\n", un, ten, hun);

	return 0;
}