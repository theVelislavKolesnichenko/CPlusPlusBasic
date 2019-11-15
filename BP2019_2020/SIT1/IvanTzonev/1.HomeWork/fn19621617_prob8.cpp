#include <iostream>
using namespace std;

int main() 
{
	int x, y;
	cout << "Въведете y=" << endl;
	cin >> y;
	x = (2 * y + 5) / (14 - y / 3);
	cout << "x = (2*y + 5)/(14-y/3)" << "\n x=" << x;
return 0;
}