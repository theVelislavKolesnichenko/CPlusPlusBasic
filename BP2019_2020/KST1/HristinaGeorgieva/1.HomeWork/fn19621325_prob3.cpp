#include <iostream>
using namespace std;
int main()
{
	int u, t, h, w; //u-units, t-tens, h-hundreds, w-whole number//
	w = 576;
	u = w % 10;
	t = w / 10 % 10;
	h = w / 100;
	cout << w << endl;
	cout << "Units=" << u << endl;
	cout << "Tens=" << t << endl;
	cout << "Hundreds=" << h << endl;
	system("pause");
	return 0;
}