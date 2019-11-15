#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int number = 576;
	int units, hundreds, tens;
	units = number % 10;
	tens = number / 10 % 10;
	hundreds = number / 100 % 10;
	cout << "units=" << units << " tens=" << tens << " hundreds=" << hundreds << endl;

	
	return 0;
}