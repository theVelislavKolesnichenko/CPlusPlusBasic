#include <iostream>
using namespace std;
int chislo(int count);
	int main()
{
	int a;
	cout<<"Insert a"<<endl;
	cin>>a;
	cout<<chislo(a)<<endl;

	return 0;
}
int chislo(int count)
{
	int sum= count;
	for (int i=1; i< count; i++)
	{
		cout<<i;
	}
	return sum;
}


