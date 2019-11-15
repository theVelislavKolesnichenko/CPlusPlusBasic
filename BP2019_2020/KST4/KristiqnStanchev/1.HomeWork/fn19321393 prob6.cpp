#include <iostream>

using namespace std;

int main()
{
	cout << "z = 2(a-b)(a-c)\n";

	int a, b, c;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	printf("z = %g\n", (2 * (a - b) * (a - c)));

	return 0;
}
