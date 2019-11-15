#include <iostream>
using namespace std;

int dete(int a)
{
	if ((a > 0) && (a < 1))
	{
		cout << "Baby" << endl;
		return 0;
	}
	else if ((a >= 1) && (a < 3))
	{
		cout << "Toddler" << endl;
		return 0;
	}
	else if ((a >= 3) && (a < 5))
	{
		cout << "Preschool" << endl;
		return 0;
	}
	else if ((a >= 5) && (a <= 12))
	{
		cout << "Gradeschooler" << endl;
		return 0;
	}
	else if ((a >= 13) && (a < 18))
	{
		cout << "Teen" << endl;
		return 0;
	}
	else if ((a >= 18) && (a < 21))
	{
		cout << "Young Adult" << endl;
		return 0;
	}
	else
	{
		cout << "Chiloto ne otgovarq na intervala za vazrast na dete" << endl;
		return 0;
	}

}

int main()
{
	int a;
	cout << "Vavedete chislo za vazrast na dete(0-21godini)" << endl;
	cout << " a = ";
	cin >> a;
	cout << "Vazrastoviqt period na deteto e:" << endl;
	dete(a);
	return 0;
}