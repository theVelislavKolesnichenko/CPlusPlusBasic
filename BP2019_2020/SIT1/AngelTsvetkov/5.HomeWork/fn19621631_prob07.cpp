#include <iostream>
using namespace std;
bool funkciq(int a);
int main()
{
	for (int a = 1; a <= 20; a++)
	{
		bool x = funkciq(a);
		if (x== true)
		{
			cout << a << " e prosto chislo" << endl;
		}
		else {};
	}
	return 0;
}
bool funkciq(int a)
{
	bool c;
	for (int i = 2; i <= a / 2; i++)
	{
		if (a % i != 0)
		{
			c = true;
			return c;
		}
		else { 
			c = false;
				return c; }
	}
}