#include <iostream>
using namespace std;

void age();

int main()
{
	age();
}

void age()
{
	int age;
	cout << "Enter age:\n";
	cin >> age;
	if (age > 0 && age < 1)
		cout << "Baby";
	else if (age >= 1 && age < 3)
		cout << "Toddler";
	else if (age >= 3 && age < 5)
		cout << "Preschool";
	else if (age >= 5 && age <= 12)
		cout << "Gradeschooler";
	else if (age >= 13 && age < 18)
		cout << "Teen";
	else if (age >= 18 && age < 21)
		cout << "Young Adult";


 }