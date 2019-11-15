#include <iostream>
using namespace std;

void f(int a);

int main()
{
	int a;
	cout << "a=";
	cin >> a;
	f(a);

	return 0;
}
void f(int a) 
{
	if (a > 0)
	{
		cout << "Positive" << endl;
	}
	else if (a < 0)
	{
		cout << "Negative" << endl; 
	}
}
