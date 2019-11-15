#include <iostream>
using namespace std;

void f(float a);

int main()
{
	float a;
	cout << "Age=";
	cin >> a;
	f(a);

	return 0;
}
void f(float a)
{
	if (a > 0 && a < 1)
	{
		cout << "Baby" << endl;
	}
	else if (a >= 1 && a < 3)
	{
		cout << "Toddler" << endl;
	}
	else if (a >= 3 && a < 5)
	{
		cout << "Preschool" << endl;
	}
	else if (a >= 5 && a <= 12)
	{
		cout << "Gradeschooler" << endl;
	}
	else if (a >= 13 && a < 18)
	{
		cout << "Teen" << endl;
	}
	else if (a >= 18 && a < 21)
	{
		cout << "Young Teen" << endl;
	}
	else if (a >= 22 && a <= 122)
	{
		cout << "Mature" << endl;
	}
}
