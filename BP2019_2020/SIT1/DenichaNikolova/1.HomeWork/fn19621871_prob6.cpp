#include <iostream>
using namespace std;

int main()
{
	float a, b, c, z;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	z = 2 * (a-b)*(a-c);
	cout << "z=" << z << endl;
	return 0;
}