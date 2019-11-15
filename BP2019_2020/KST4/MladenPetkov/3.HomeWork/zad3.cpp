#include<iostream>
using namespace std;
string abc(int a);
int main()
{
	int a;
	cout << "a=";
	cin >> a;
	cout << abc(a) << endl;
	return 0;
}
string abc(int a)
{
	if (a > 0)
	{
		string kol = "Positive";
		return kol;
	}
	else if (a < 0)
	{
		string kol = "Negative";
		return kol;
	}
	else
	{
		return 0;
	}
}