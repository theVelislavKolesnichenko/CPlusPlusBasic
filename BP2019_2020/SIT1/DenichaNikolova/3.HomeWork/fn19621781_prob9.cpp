#include <iostream>

using namespace std;

void child(int age);

int main()
{
	int age;
	
	cin >> age;

	child(age);
	

	//child(1);//baby
	//child(3);//todler
	


	return 0;
}


void child(int age)
{
	if (age > 0 && age < 1)
	{
		cout << "Baby";
	}
	if (age >= 1 && age < 3)
	{
		cout << "Toddler";
	}
	if (age >= 3 && age < 5)
	{
		cout << "Preschool";
	}
	if (age >= 5 && age <= 12)
	{
		cout << "Gradeschooler";
	}
	if (age >= 13 && age < 18)
	{
		cout << "Teen";
	}
	if (age >= 18 && age < 21)
	{
		cout << "Young adult";
	}

	cout << endl;
}

