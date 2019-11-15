#include <iostream>
#include <math.h>
using namespace std;
float equation1(float y);
float equation2(float y);
int main()
{
	float y;
	cout << "y=";
	cin >> y;
	if (y <=-5) {
		cout << "x=" << equation1(y) << endl;
	}
	else if (y > 5) {
		cout << "x=" << equation2(y) << endl;
	}
	system("pause");
	return 0;
}
float equation1(float y)
{
	float x = pow(y, 3) + (pow(y, 4) + 2 * y);
	return x;
}
float equation2(float y)
{
	float x = 2 * (2 * y + 5) / (14 - y / 3);
	return x;
}