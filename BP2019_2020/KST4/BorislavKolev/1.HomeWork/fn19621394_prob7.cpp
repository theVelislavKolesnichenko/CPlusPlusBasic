#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, c;
	double y;
	cout << "vuvedi a:";
	cin >> a;
	cout << "vuvedi c:";
	cin >> c;
	y = sqrt(a + 2) - pow(c, 2);
	cout << "Y=" << y << endl;
	return 0;

}