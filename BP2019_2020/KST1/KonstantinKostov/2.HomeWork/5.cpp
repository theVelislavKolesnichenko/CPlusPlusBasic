#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b;
	cout << "Въведете две числа: " << endl;
	cin >> a >> b;
	int x;
	x = 2 * ((a - b) / (b - a));
	cout << x;
	return x;

}