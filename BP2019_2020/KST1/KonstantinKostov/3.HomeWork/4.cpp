#include <iostream>
using namespace std;
int main()
{
	int y;
	cout << "Въведете число: " << endl;
	cin >> y;
	int x = 20 / y;
	if (y == 0)
	{
		cout << "Не може да се дели на 0";
	}
	else
	{
	
	cout << "x= " << x;
}
	return 0;
}