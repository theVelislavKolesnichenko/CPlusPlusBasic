#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int u, t, h;
	const int a = 576;
	cout << a << endl;
	u = a % 10;
	t = (a / 10) % 10;
	h = (a / 100) % 10;
	cout << "Units" << setw(2) << u << endl;
	cout << "Tens" << setw(2) << t << endl;
	cout << "Hundreds" << setw(2) << h << endl;
	return 0;
}