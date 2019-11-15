#include<iostream>
using namespace std;
void zad(int x)
{
	if (x %2== 0)
	{
		cout << "even";
	}
	else
	{
		cout << "odd";
	}
}
int main()
{
	int a = 5;
	zad(a);
}