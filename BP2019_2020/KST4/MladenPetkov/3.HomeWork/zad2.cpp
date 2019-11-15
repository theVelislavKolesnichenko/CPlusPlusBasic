#include <iostream>
using namespace std;

int ne(int a, int b);

int main()
{
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << ne(a, b) << endl;
	system("pause");
	

	return 0;
}
int ne(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
