#include <iostream>
using namespace std;

int main()
{
	int y, a, c;
	cout << "Vyvedete a=";
	cin >> a;
	cout << "Vyvedete c=";
	cin >> c;
	y = sqrt(a + 2) - c * 2;
	cout << "y=" << y << endl;
		return 0;
}