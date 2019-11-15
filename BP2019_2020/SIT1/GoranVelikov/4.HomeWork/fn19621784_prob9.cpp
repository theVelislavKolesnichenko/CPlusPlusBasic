#include <iostream>
#include <cmath>
using namespace std;
int funct(int a)
{
	while (a >= 0)
	{
		cin >> a;
		if (a % 4 == 0) { cout << "visokosna"<<" "; }
		else { cout << "nevisokosna"<<" "; }
		
	}
	return 0;
}

int main()
{
	int a;
	cin >> a;
	cout << funct(a) << endl;
	return 0;
}