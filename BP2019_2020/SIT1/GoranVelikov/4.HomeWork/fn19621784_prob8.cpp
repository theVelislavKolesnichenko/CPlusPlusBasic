#include <iostream>
#include <cmath>
using namespace std;
int funct(int a)
{
	
	do{
		cin >> a;
		if (a % 1000 != 0 && a % 10000 == 0) { cout << "four-digit"; }
		else if (a % 1000 != 0 && a % 10000!= 0) { cout << "more than four-digit"; }
		else if (a % 1000 == 0) { cout << "less than four-digit"; }
		if (a = 0) { break; }
	} while (a != 0);

	return 0;
}

int main()
{
	int a;
	cin >> a;
	cout << funct(a) << endl;
	return 0;
}