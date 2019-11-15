#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, c, y;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	y = sqrt(a + 2) - c * c;
	cout << "y=" << y << endl;
	system("pause");
	return 0;
}