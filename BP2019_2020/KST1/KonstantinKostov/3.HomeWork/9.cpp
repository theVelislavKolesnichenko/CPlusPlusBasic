#include <iostream>
using namespace std;
int main()
{
	double a;
	cout << "Въведете възраст:" << endl;
	cin >> a;
	if(a>0 && a<1)
	{
		cout << "Baby";
	}
	else if (a > 0 && a < 3)
	{
		cout << "Toddler";
	}
	else if (a >= 3 && a < 5)
	{
		cout << "Preschool";
	}
	else if(a>=5 && a<12)
	{
		cout << "Gradeschooler";
	}
	else if(a>=13 && a<18)
	{
		cout << "Teen";
	}
	else if(a>=18 && a<21)
	{
		cout << "Young adult";
	}
	return 0;
}