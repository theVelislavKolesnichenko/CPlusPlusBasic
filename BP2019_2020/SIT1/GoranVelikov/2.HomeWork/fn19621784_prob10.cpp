#include <iostream>
using namespace std;

int funct(int a)
{
	if (a % 2 == 0) { cout << "Even" << endl; }
	if (a % 2 != 0) { cout << " Odd" << endl; }
return 0;
}
int main()
{
	int a;
	cin >> a;
	cout << funct(a);
	return 0;
}