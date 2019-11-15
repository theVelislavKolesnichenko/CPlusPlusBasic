#include <iostream>
#include <stdio.h>
using namespace std;

void Even_or_Odd_number();

int main()
{
	Even_or_Odd_number();

	return 0;
}

void Even_or_Odd_number()
{
	int number;
	printf("Enter number:\n");
	cin >> number;
	if (number % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}