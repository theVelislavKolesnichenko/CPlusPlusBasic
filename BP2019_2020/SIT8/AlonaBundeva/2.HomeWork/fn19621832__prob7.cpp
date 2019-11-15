#include <iostream>
using namespace std;
int main()
{
	int y;
	int x;
	cout << "y=";
	cin >> y;
	x = show (y);
	cout << x << endl;
	return 0;
}
int show(int y)
{
	int x;
	cout << "x=2(2y + 5)/(14 - y/3)" << endl;
	cout << "x=";
	x = 2 * (2 * y + 5) / (14 - y / 3);
	return x;
}