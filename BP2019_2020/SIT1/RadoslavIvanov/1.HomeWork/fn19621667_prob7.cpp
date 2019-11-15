#include <iostream>
using namespace std;

int main()
{
	float a, c;
	cout << "a=";
	cin >> a;
	cout << "c=";
	cin >> c;
	float y;
	y = sqrt(a + 2) - c * 2;
	cout << "y=" << y << endl;
	return 0;
}
