#include <iostream>
using namespace std;
int main()
{
	int n = 576;
	int u, t, h; //units, tens, hundreds

	u = n % 10;
	t = (n / 10) % 10;
	h = (n / 100) % 10;
	cout << "Units " << u << " Tens " << t << " Hundreds " << h << endl;

	return 0;
}