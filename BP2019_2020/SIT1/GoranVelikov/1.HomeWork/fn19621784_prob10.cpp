#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int a, b, s, p;
	cin >> a >> b;
	p = 2 * a + 2 * b;
	s = a * b;
	cout << "P=" << p << endl << "S=" << s;
	return 0;
}