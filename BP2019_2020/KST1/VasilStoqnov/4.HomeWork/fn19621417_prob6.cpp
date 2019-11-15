#include <iostream>
#include<iomanip>
using namespace std;
void func1();
void func2();
void func3();
int main()
{
	func1();
	func2();
	func3();
	return 0;
}
void func1()
{
	int red, a, b;
	cout << "Vuvedi redove a= "; cin >> red;
	cout << "podtochka a" << endl;
	for (int a = red; a >= 1; --a)
	{
		for (int c = 1; c <= a; ++c)
		{
			cout << "%";
		}
		cout << endl;
	}
}
void func2()
{
	int red, a, b;
	cout << "Vuvedi kolko redove B= "; cin >> red;
	cout << "Podtochka b" << endl;
	for (int a = 1; a <= red; a++)
	{
		for (int b = 1; b <= red - a; b++)
		{
			cout << "";
		}
		for (int b = 1; b <= a; b++)
		{
			cout << "%";
		}
		cout << endl;
	}
	for (int a = red - 1; a > 0; a--)
	{
		for (int b = 1; b <= red - a; b++)
		{
			cout << "";
		}
		for (int b = 1; b <= a; b++)
		{
			cout << "%";
		}
		cout << endl;
	}
}
void func3()
{
	int red, a, b, c;
	cout << "Vuvedi kolko redove= "; cin >> red;
	cout << "podtochka v" << endl;
	for (a = red; a >= 1; a--)
	{

		for (c = a; c < red; c++)
		{
			cout << " ";
		}
		for (b = 1; b <= a; b++)
		{
			cout << "% ";
		}
		cout << "\n";
	}
	
}