#include <iostream>
using namespace std;

int main()
{
	int u, t, h, n; // units, tens, hundreds, number
	cout << "Vyvedete tricifreno chislo";
	cin >> n;
	u = n % 10;
	t = n / 10 % 10;
	h = n / 100;
	cout << "units:" << u << endl << "tens:" << t << endl << "hundreds:" << h << endl;
	return 0;
}