#include <iostream>
#include <string>
using namespace std;
string Age(int a);
int main()
{
	int a;
	cout << "Enter age:";
	cin >> a;
	cout << "You are a " << string Age(a);
	
}
string Age(int a)
{
	if (a > 0 && a < 1)
		return "Baby";
	if (a >= 1 && a < 3)
		return  "Toddler";
	if (a >= 3 && a < 5)
		return "Preschool";
	if (a >= 5 && a <= 12)
		return "Gradeschooler";
	if (a >= 13 && a < 18)
		return "Teen";
	if (a >= 18 && a < 21)
		return "Young Adult";
}