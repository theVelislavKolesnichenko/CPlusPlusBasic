#include <iostream>
using namespace std;

int main()
{

	int n = 576;
	int u, t, h;  // Units 6 Tens 7 Hundreds 5

	u = n % 10;
	t = (n / 10) % 10;
	h = (n / 100) % 10;

	cout << " Units = " << u << " Tens = " << t << " Hundreds = " << h;
	return 0;
}