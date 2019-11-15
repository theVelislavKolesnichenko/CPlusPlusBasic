#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int number = 576;
	int hundreds, tens, units;  
	units = (number % 10);
	tens = (number / 10)%10;
	hundreds = (number / 100)%10;
	cout <<"hundreds="<< hundreds <<"tens="<< tens <<"units="<< units;
	return 0;
}
