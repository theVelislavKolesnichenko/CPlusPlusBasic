#include <iostream>
#include <cmath>
using namespace std;
int funct(int a)
{
	int i = 1;
	for (i;i < a;i++) { cout << i<<' '; }
	return a;
}

int main()
{
	int a;
	cin >> a;
	cout << funct(a) << endl;
	return 0;
}