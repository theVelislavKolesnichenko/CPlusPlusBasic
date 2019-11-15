#include <iostream>
using namespace std;
int funkciq(int a,int b);
int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	while ((a != 0) && (b != 0))
	{
		cout << "a*b = " << funkciq(a, b) << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
	}	
	return 0;
}
int funkciq(int a, int b)
{
	return a*b;
}

