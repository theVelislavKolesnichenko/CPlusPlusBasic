#include <iostream>
#include <string>
using namespace std;
string ak(int a);
int main()
{
	int a;
	cout<<"a=";
	cin>>a;
	cout<<"izwejda cisloto dali e polojitelno ili otricatelno:"<<ak(a)<<endl;
	return 0;
}
string ak(int a)
{
	if(a>0)
	{
		return "Positive";
	}
	else
	{
		return "Negative";
	}
}