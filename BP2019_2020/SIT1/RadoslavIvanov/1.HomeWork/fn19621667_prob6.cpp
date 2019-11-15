#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	float z;
	z = 2 * (a - b) * (a - c);
	cout << "z=" << z << endl;
	return 0;
}