#include <iostream>
using namespace std;
void Age(int y);
int main()
{
	int y;
	cout << "y= ";
	cin >> y;
	Age(y);
	return 0;
}

void Age(int y)
{
	if (y<1)
	{
		cout<<"Baby"<< endl;
	}
	else if ((y >= 1) && (y <3))
	{
		cout << "Toddler"<<endl;
	}
	else if ((y >= 3) && (y < 5))
	{
		cout << "Preschooler" << endl;
	}
	else if ((y >= 5) && (y <= 12))
	{
		cout << "Gradeschooler" << endl;
	}
	else if ((y >= 13) && (y < 18))
	{
		cout << "Teen" << endl;
	}
	else if ((y >= 18) && (y < 21))
	{
		cout << "Young Adult" << endl;
	}
}