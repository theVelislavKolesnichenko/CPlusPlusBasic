#include <iostream>
#include <iomanip>

using namespace std;

void function1(char a);
void function2(char a);
void function3(char a);

int main()
{
	//int a=0;
	//cin >> a;
	//form('a');
	//deg();
	char a = '%';
	function1(a);
	cout << " " << endl;
	function2(a);
	cout << " " << endl;
	function3(a);

	return 0;
}

void function1(char a)
{
	int i = 0; int n = 5;
	while (i < 5)
	{
		int j = n--;
		while (j > 0)
		{
			cout << a; j--;
		} i++;
		cout << endl;
	}
}
void function2(char a)
{
	int n = 1; int k = 0;
	for (int i = 0; i < 5; i++)
	{
		if (n < 3)
		{
			for (int j = 0; j < n; j++)
			{
				cout << a;
			}
			n++;
		}
		else
		{
			for (int j = n; j > k; j--)
			{
				cout << a;
			}k++;

		}
		cout << endl;
	}
}
void function3(char a)
{
	int p = 0;
	int n = 10;
	int i = 0;
	do {
		int j = n;
		cout << setw(2 + p); p++;
		do {

			cout << a; j--;

		} while (j > 0);
		n -= 2;
		cout << endl;
		i++;
	} while (i < 5);

}