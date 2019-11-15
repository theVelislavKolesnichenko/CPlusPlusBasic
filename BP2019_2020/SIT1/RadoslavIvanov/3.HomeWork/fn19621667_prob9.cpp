#include <iostream>
#include <string.h>
using namespace std;

string Age(int a);

int main()
{
	int age;
	cout << "Age =";
	cin >> age;
	cout << Age(age);
}

string Age(int a)
{
	if (a > 0 && a < 1) { return "baby"; }
	if (a >= 1 && a < 3) { return "Toddler"; }
	else if (a >= 3 && a < 5) return "Preschool";
	else if (a >= 5 && a < 12) return "Gradeschooler";
	else if (a >= 12 && a < 18) return "Teen";
	else if (a >= 18 && a < 21) return "Young Adult";
}