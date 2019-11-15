#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, c;

	cout << "a = ";
	cin >> a;
	cout << "c = ";
	cin >> c;

	printf("y = %f\n", (sqrt(a + 2) - c * 2));
	return 0;
}