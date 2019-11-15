#include <iostream>
using namespace std;

bool Prime(int &a);

int main()
{
	for (int i = 1; i <= 20; i++)
	{
		if (Prime(i))cout << i << ' ';
	}
	return 0;
}

bool Prime(int &a)
{
	int count = 0;
	for (int i = 2; i < a;i++)
	{
		if (a % i == 0) count++;
	}
	if (count == 0)return true;
	else return false;
}