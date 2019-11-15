#include <iostream>
using namespace std;
int MAX(int a, int b);
int main()
{
	int a = 9;
	int b = 16;
	cout << MAX(a, b) << endl;

	return 0;

}

int MAX(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}