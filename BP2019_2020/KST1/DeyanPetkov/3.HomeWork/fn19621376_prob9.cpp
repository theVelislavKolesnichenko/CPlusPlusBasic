#include<iostream>
using namespace std;
int bebe(double a);
int main()
{
	double a;
	cout << "Vuzrastta na deteto e? ";
	cin >> a;
	cout << bebe(a);
	return 0;
}
int bebe(double a)
{
	if (a > 0 && a < 1)
	{
		cout << "Baby a=";
	}
	else if (a >= 1 && a < 3)
	{
		cout << "Toddler a=";
	}
	else if (a >= 3 && a < 5)
	{
		cout << "Preschool a=";
	}
	else if (a >= 5 && a <=12)
	{
		cout << "Gradeschooler a=";
	}
	else if (a >= 13 && a < 18)
	{
		cout << "Teen";
	}
	else if (a >= 7 && a < 21)
	{
		cout << "Young Adult a=";
	}
	return a;
}
