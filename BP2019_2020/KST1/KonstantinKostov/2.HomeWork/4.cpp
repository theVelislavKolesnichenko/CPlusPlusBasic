#include <iostream>
using namespace std;
int main()
{
	int a = 837;
	int u, t, h;
	u = a % 10;
	t = (a / 10) % 10;
	h = (a / 100) % 10;
	cout << u << endl;
	cout << h << endl;
	cout << t << endl;
	return 0;

}