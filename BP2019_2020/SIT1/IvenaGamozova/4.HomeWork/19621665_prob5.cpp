#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, n;
	cout << "x=";
	cin >> x;
	cout << "n=";
	cin >> n;
	for (int i = 1; i < n; i++)
		cout << x + i << endl;
	return 0;
}