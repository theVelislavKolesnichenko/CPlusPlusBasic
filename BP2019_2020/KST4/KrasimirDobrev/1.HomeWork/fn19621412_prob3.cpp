#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n = 576;
	int u, t, h;
	u = n % 10;
	t = (n / 10) % 10;
	h = (n / 100) % 10;
	cout << "Units:" << u << "\tTens:" << t << "\tHundreds:" << h << endl;
	return 0;
}