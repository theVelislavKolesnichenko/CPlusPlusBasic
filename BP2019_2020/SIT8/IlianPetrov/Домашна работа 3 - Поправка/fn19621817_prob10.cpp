#include <iostream>
using namespace std;
void Num(int y);
int main()
{
	int y;
	cout << "y= ";
	cin >> y;
	Num(y);
	return 0;
}

void Num(int y)
{
	if (y % 2 == 0)
	{
		cout << "Even"<< endl;
	}
	else 
	{
		cout << "Odd" << endl;
	}
}