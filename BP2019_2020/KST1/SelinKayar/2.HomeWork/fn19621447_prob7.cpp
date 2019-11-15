#include <iostream>
using namespace std;

float eq(float y)
{
	float z;
	z = (2 * y + 5) / (14 - y / 3);
	return z;
}
int main()
{
	float x, y;
	cout << "y= ";
	cin >> y;
	x = 2 * eq(y);
	cout << "x= " << x << endl;
	return 0;

}