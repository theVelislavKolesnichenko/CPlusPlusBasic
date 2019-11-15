#include <iostream>

using namespace std;

void num_of_month(int a);


int main()
{
	int a;

	cout << "Enter a number of month of the year:";
	cin >> a;
    
	num_of_month(a);


	return 0;
}

void num_of_month(int a)
{
	if (a > 2 && a < 6)
	{
		cout << "Spring" << endl;
	}
	else if(a > 5 && a < 9)
	{
		cout << "Summer" << endl;
	}
	else if(a > 8 && a < 12)
	{
		cout << "Autumn" << endl;
	}
	else if(a == 12 || a == 1 || a == 2)
	{
		cout << "Winter" << endl;
	}
	else
	{
		cout << "This is not a month." << endl;
	}
}
