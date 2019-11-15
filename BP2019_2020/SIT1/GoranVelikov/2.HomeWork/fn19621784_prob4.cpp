#include <iostream>
using namespace std;

int funct(int y)
{
	int x;
	x = 20 / y;
	return x;
}
int main()
{
	int y;
	cin >>y;
	if (y = 0) 
	{
		cout << "невъзможно да се раздели на 0" << endl; 
	}
	else 
	{
		cout << funct(y);
	}
	return 0;
}