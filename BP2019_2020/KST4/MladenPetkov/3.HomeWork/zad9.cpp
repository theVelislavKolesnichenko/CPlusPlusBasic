#include<iostream>
using namespace std;
string abc(int a);
int main()
{
	int a;
	cout << "Vuzrast=";
	cin >> a;
	cout << "Vuzrastov period-" << abc(a) << endl;
	return 0;
}
string abc(int a)
{
	if ((a>=0)&&(a<1))
	{
		string kol = "Baby";
		return kol;
	}
	else if ((a>=1)&&(a<3))
	{
		string kol = "Toddler";
		return kol;
	}
	else if ((a>=3)&&(a<5))
	{
		string kol = "Preschool";
		return kol;
	}
	else if ((a>=5)&&(a<=12))
	{
		string kol = "Gradeschooler";
		return kol;
	}
	else if ((a>=13)&&(a<18))
	{
		string kol = "Teen";
		return kol;
	}
	else if ((a>=18)&&(a<21))
	{
		string kol = "Young Adult";
		return kol;
	}
	else
	{
		return 0;
	}
}