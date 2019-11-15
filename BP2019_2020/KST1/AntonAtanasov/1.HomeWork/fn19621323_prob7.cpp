#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int y, a, c;
	cout << "Vyvedete a = ";
	cin >> a;
	cout << "Vyvedete c = ";
	cin >> c;
	y = sqrt(a + 2) - pow(c, 2);
	cout << y;
    return 0;
}


