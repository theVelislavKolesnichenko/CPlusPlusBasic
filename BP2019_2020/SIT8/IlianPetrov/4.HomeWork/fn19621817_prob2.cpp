#include <iostream>
using namespace std;
int MAX(int y);
int main()
{
	int y;
	cout << "y= ";
	cin >> y;
	cout << MAX(y) << endl;
	return 0;
}

int MAX(int y)
{
	if ((y >= 1) && (y < 3))
	{
		cout << "Spring Month: ";
		return y;
	}
	else if ((y >= 3) && (y < 6))
	{
		cout << "Summer Month: ";
		return y;
	}
	else if ((y >= 6) && (y <= 9))
	{
		cout << "Autumn Month: ";
		return y;
	}
	else if ((y >= 9) && (y <= 12))
	{
		cout << "Winter Month: ";
		return y;
	}
	else
	{
		cout << "This is not a Month: ";
		return y;
	}
}