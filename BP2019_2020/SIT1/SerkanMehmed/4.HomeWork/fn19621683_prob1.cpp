#include <iostream>
#include <math.h>
using namespace std;
int izraz(int a, int b);

int main()
{
	int a,b;
	cout<< "Insert a"<<endl;
	cin>>a;
	cout<<"Insert b"<<endl;
	cin>>b;
	cout<<"The result is:"<< izraz(a, b)<<endl;
	
	return 0;
}
int izraz(int a, int b)
{ 
	if(a==0||b==0)
	{
		cout<<"Invalid Input";
		return 0;
	}
	else
	{
		return sqrt(a+2)-2/b;
	}
}