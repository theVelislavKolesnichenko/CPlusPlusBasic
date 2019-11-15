#include <iostream>
#include <string>
using namespace std;
string ch(int a);
int main()
{
	int a;
	cout<<"Vyvedi cislo:";
	cin>>a;
	cout<<"Cisloto e: "<<ch(a)<<endl;
	return 0;
}
string ch(int a)
{
	if(a%2==0)
	{
		return "Chetno";
	}
	else 
	{
		return "Nechetno";
	}
}
