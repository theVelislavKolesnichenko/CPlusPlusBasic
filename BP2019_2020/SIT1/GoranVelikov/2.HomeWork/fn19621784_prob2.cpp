#include <iostream>
using namespace std;

int funct(int s)
{
	if (s>=0)
	{
		return s;
	}	else 
	{
		s = -s;
		return s;
	}
}
int main()
{
	int a, b,s;
	cin >> a >> b;
	s = a - b;
	cout << funct(s);
	return 0;
}