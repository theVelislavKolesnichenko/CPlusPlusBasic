#include <iostream>
int a(int a);
using namespace std;
int main()
{
	int a;
	cout << "a="<< endl;
	cin >> a;
	return 0;
}
int a(int a)
{
	if (a /2)
	{
		cout << "EVEN" << a<< endl;
		
	}
	else 
	{
		cout << "ODD"<<a<<endl;
	}
	return a;
	
}